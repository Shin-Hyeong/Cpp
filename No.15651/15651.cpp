#include <iostream>

void dfs(int depth);
using namespace std;

int N, M;
int arr[8];
int check[8];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin >> N >> M;

    dfs(0);

    return 0;
}

void dfs(int depth){
    if(depth == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= N; i++){
        arr[depth] = i;
        dfs(depth + 1);
    }
}