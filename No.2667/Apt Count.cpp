#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#define MAX 26
using namespace std;

int N;
int map[MAX][MAX] = { 0 };
bool visited[MAX][MAX] = { false };
vector<int> Apt;

// 상 하 좌 우
int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

void Search(int y, int x);

int main() 
{
	string home;
	int Count = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> home;
		for (int j = 0; j < home.size(); j++)
		{
			map[i][j] = home[j] - '0';
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1 && visited[i][j] == false)
			{
				Search(i, j);
				Count++;
			}
		}
	}

	cout << Count << "\n";

	sort(Apt.begin(), Apt.end());

	for (int i = 0; i < Apt.size(); i++)
	{
		cout << Apt[i] << "\n";
	}

	return 0;
}

void Search(int y, int x)
{
	int AptNum = 0;
	queue<pair<int, int>> q;
	q.push({ y, x });
	visited[y][x] = true;

	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		AptNum++;

		for (int i = 0; i < 4; i++)
		{
			int Nexty = y + dy[i];
			int Nextx = x + dx[i];

			if (Nexty < 0 || Nextx < 0 || Nexty >= N || Nextx >= N)
				continue;
			if (map[Nexty][Nextx] == 0)
				continue;
			if (map[Nexty][Nextx] == 1 && visited[Nexty][Nextx] == false)
			{
				q.push({ Nexty, Nextx });
				visited[Nexty][Nextx] = true;
			}
		}
	}
	Apt.push_back(AptNum);
}
