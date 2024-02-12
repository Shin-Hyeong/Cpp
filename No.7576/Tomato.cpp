#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

queue<pair<int, int>> q;
int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };
int y, x, Day = 0;
int map[MAX][MAX];

void BFS();
bool IsInside(int Nexty, int Nextx);

int main()
{
	cin >> x >> y;

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1)
			{
				q.push({ i, j });
			}
		}
	}

	BFS();

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (map[i][j] == 0)
			{
				cout << "-1\n";
				return 0;
			}
			if (Day < map[i][j])
			{
				Day = map[i][j];
			}
		}
	}

	cout << Day - 1 << endl;
	return 0;
}

void BFS()
{
	while (!q.empty())
	{
		int x = q.front().second;
		int y = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int Nexty = y + dy[i];
			int Nextx = x + dx[i];

			if (IsInside(Nexty, Nextx) && map[Nexty][Nextx] == 0)
			{
				map[Nexty][Nextx] = map[y][x] + 1;
				q.push({ Nexty, Nextx });
			}
		}
	}
}

bool IsInside(int Nexty, int Nextx)
{
	return (Nexty >= 0 && Nextx >= 0 && Nexty < y && Nextx < x);
}
