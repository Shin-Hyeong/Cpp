#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs (int start, vector<int>* node ,bool* ch);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int computer, connect;
    cin >> computer >> connect;

    vector<int> com[computer + 1];
    bool check[computer + 1] = {false};

    int info1, info2;

    for (int i = 0; i < connect; i++)
    {
        cin >> info1 >> info2;
        com[info1].push_back(info2);
        com[info2].push_back(info1);
    }

    bfs(1, com, check);

    return 0;
}

void bfs(int start, vector<int>* node, bool* ch)
{
    int count = 0;
    queue<int> q;
    q.push(start);
    ch[start] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < node[x].size(); i++)
        {   
            // node[x][i] : x와 연결된 노드
            int y = node[x][i];
            if (!ch[y])
            {
                q.push(y);
                ch[y] = true;
                count++;
            }
        }
    }

    cout << count << endl;
}