#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define	MAX 1001

int map[MAX][MAX];
bool visited[MAX];
int N, M, V;

void bfs(int start);
void dfs(int start);
void reset(int Node);

using namespace std;

int main()
{
	int lineA, lineB;

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		cin >> lineA >> lineB;

		map[lineA][lineB] = 1;
		map[lineB][lineA] = 1;
	}

	reset(N);
	dfs(V);

	cout << "\n";

	reset(N);
	bfs(V);

	return 0;
}

void bfs(int start)
{
	queue<int> que;
	que.push(start);
	visited[start] = true;

	while (!que.empty())
	{
		start = que.front();
		que.pop();
		cout << start << " ";
		for (int i = 1; i <= N; i++)
		{
			if (map[start][i] == 1 && visited[i] == false)
			{
				que.push(i);
				visited[i] = true;
			}
		}
	}
}

void dfs(int start)
{
	visited[start] = true;
	cout << start << " ";

	for (int i = 1; i <= N; i++)
	{
		if (map[start][i] == 1 && visited[i] == false) {
			dfs(i);
		}
	}
}

void reset(int Node)
{
	for (int i = 1; i <= Node; i++)
	{
		visited[i] = false;
	}
}
