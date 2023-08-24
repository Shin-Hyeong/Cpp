#include <iostream>

#define MAX 9
using namespace std;
void dfs(int n);

int N, M;
int arr[MAX];
bool check[MAX]; //������������ false�� �ʱ�ȭ

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
            if(!check[i]){          //��带 ó�� �湮�Ѵٸ�
                check[i] = true;    //��带 �湮�ߴٰ� ǥ��
                arr[depth] = i;     //arr�迭�� depth��ġ�� ����
                dfs(depth + 1);     //depth + 1���·� dfs�ٽ� ȣ��
                check[i] = false;   //��� depth �Լ� ���� �湮�ߴ� ��带 �湮 ǥ�� ����
            }
        }
    }
}