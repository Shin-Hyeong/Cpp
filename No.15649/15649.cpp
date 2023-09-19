#include <iostream>

#define MAX 9
using namespace std;
void dfs(int n);

int N, M;
int arr[MAX];
bool check[MAX]; //전역변수여서 false로 초기화

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

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
        return ;
    }
    else{
        for(int i = 1; i <= N; i++){
            if(!check[i]){          //노드를 처음 방문한다면
                check[i] = true;    //노드를 방문했다고 표시
                arr[depth] = i;     //arr배열에 depth위치에 저장
                dfs(depth + 1);     //depth + 1상태로 dfs다시 호출
                check[i] = false;   //재귀 depth 함수 이후 방문했던 노드를 방문 표시 해제
            }
        }
    }
}