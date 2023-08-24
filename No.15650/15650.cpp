#include <iostream>

using namespace std;
void dfs(int depth);

int N, M;
int arr[8];
bool check[8];

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
    else{
        for(int i = 1; i <= N; i++){
            if(!check[i] && arr[depth - 1] < i){
                check[i] = true;
                arr[depth] = i;
                dfs(depth + 1);
                check[i] = false;
            }
        }
    }
}