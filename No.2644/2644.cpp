#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, result;
vector<int> node[101];
bool visited[101];

void dfs(int now, int end, int num);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int x, y;
    // 전체 사람의 수
    cin >> n;
    // 촌수를 찾는 사람 2명
    cin >> x >> y;
    // 관계의 개수
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    // 시작점, 도착점, 촌수
    dfs(x, y, 0);
    
    if (result != 0)
        cout << result;
    else
        cout << "-1";

    return 0;
}

void dfs(int now, int end, int num)
{
    // 방문했다 
    visited[now] = true;
    // 도착하면
    if (now == end)
        result = num;
    // now와 연결된 노드
    for (int i = 0; i < node[now].size(); i++)
    {
        int next = node[now][i];
        if(!visited[next])
            // 다음 노드에서 도착점까지 dfs, num은 증가
            dfs(next, end, num + 1);
    }
}