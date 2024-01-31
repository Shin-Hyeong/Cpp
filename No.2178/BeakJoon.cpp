#include <iostream>
#include <queue>
#include <string>
using namespace std;

#define MAX 101

int map[MAX][MAX];
int bfs(int x, int y);
int width, height;

// 상 하 좌 우
int dx[4] = {0, 0, -1, 1};
int dy[4] = { 1, -1, 0, 0 };

int main()
{
	cin >> height >> width;

	for (int i = 0; i < height; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < width; j++)
		{
			map[i][j] = str[j] - '0';
		}
	}

	cout << bfs(0, 0) << endl;


	return 0;
}

int bfs(int y, int x)
{
	queue<pair<int, int>> q;
	q.push({y, x});
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int Nexty = y + dy[i];
			int Nextx = x + dx[i];

			if (Nextx < 0 || Nextx >= width || Nexty < 0 || Nexty >= height)
				continue;
			if (map[Nexty][Nextx] == 0)
				continue;
			if (map[Nexty][Nextx] == 1)
			{
				map[Nexty][Nextx] = map[y][x] + 1;
				q.push({ Nexty, Nextx });
			}

		}
	}

	return map[height - 1][width -1];
}
