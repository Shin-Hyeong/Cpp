#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void dfs(int depth);

int N, M, num;
int arr[9];
vector<int> vec;
bool check[9];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.begin() + N);
    
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
        for(int i = 0; i < N; i++){
            if(!check[i]){
                check[i] = true;
                arr[depth] = vec[i];
                dfs(depth + 1);
                check[i] = false;
            }
        }
    }
}