#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[9], check[9], num[9];
void dfs(int depth);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    sort(num, num + N);

    dfs(0);

    return 0;
}

void dfs(int depth)
{
    if (M == depth)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (arr[depth - 1] <= num[i])
            {
                arr[depth] = num[i];
                dfs(depth + 1);
            }
        }
    }
}