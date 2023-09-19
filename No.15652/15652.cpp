#include <iostream>

using namespace std;
void dfs(int num, int depth);

int N, M;
int arr[9];  
bool check[9]; // 諛⑸Ц �솗�씤

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M; // 4   2

    dfs(1, 0); // num(�끂�뱶 踰덊샇), depth

    return 0;
}

void dfs(int num, int depth)
{
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = num; i <= N; i++)
    {
        arr[depth] = i;    // �끂�뱶 ����옣             1,1    1,2     1,3     1,4
        dfs(i, depth + 1); // �뜑 源딆씠 �뱾�뼱媛�.    1       2      3       4
    }
}
