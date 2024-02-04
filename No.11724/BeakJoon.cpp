#include <iostream>
#include <vector>
#define MAX 1001
using namespace std;

int N, M, Connected = 0;
vector<int> map[MAX];
bool checked[MAX] = { false };

void ConnectedCheck(int node);

int main()
{
	cin >> N >> M;
	int line1, line2;
	for (int i = 0; i < M; i++)
	{
		cin >> line1 >> line2;
		map[line1].push_back(line2);
		map[line2].push_back(line1);
	}

	for (int i = 1; i <= N; i++)
	{
		if (checked[i] == false)
		{
			Connected++;
			ConnectedCheck(i);
		}
	}

	cout << Connected << endl;

	return 0;
}

void ConnectedCheck(int node)
{
	checked[node] = true;
	for (int i = 0; i < map[node].size(); i++)
	{
		int idx = map[node][i];
		if (checked[idx] == false)
		{
			ConnectedCheck(idx);
		}
	}
}