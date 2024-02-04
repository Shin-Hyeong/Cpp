#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

void DFS(int node);
vector<int> map[MAX];
bool visited[MAX] = { false };
int parent[MAX] = { 0 };

int main()
{
	int N, line1, line2;
	cin >> N;


	for (int i = 0; i < N - 1; i++)
	{
		cin >> line1 >> line2;
		map[line1].push_back(line2);
		map[line2].push_back(line1);
	}

	DFS(1);

	for (int i = 2; i <= N; i++)
	{
		cout << parent[i] << "\n";
	}

	return 0;
}

void DFS(int node)
{
	visited[node] = true;
	for (int i = 0; i < map[node].size(); i++)
	{
		int idx = map[node][i];
		if (visited[idx] == false)
		{
			parent[idx] = node;
			DFS(idx);
		}
	}
}