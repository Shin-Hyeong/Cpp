#include <iostream>
#include <vector>
using namespace std;

void dfs(int x);

int number = 7; //노드 개수
int c[7]; //방문 확인
vector<int> a[8]; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    /*1과 2를 연결*/
    a[1].push_back(2);
    a[2].push_back(1);
    /*1과 3를 연결*/
    a[1].push_back(3);
    a[3].push_back(1);
    /*2과 3를 연결*/
    a[2].push_back(3);
    a[3].push_back(2);
    /*2과 4를 연결*/
    a[2].push_back(4);
    a[4].push_back(2);
    /*2과 5를 연결*/
    a[2].push_back(5);
    a[5].push_back(2);
    /*4과 5를 연결*/
    a[4].push_back(5);
    a[5].push_back(4);
    /*3과 6를 연결*/
    a[3].push_back(6);
    a[6].push_back(3);
    /*3과 7를 연결*/
    a[3].push_back(7);
    a[7].push_back(3);
    /*6과 7를 연결*/
    a[7].push_back(6);
    a[6].push_back(7);

    dfs(1);

    return 0;
}

//DFS는 스택을 사용한다. 재귀함수 또한 스택플로우에 쌓이는 형식이여서 재귀함수를 사용한다.
void dfs(int x){
    if(c[x]) return;    //방문한적이 있으면 되돌아감.
    c[x] = true;        //방문한적이 없으면 true값을 줌.
    cout << x << " ";   //처음 방문시 출력
    for(int i = 0; i < a[x].size(); i++){ //처음 방문한 노드의 인접 노드 검색
        int y = a[x][i];
        dfs(y);         //방문한적이 있는지 없는지 재귀함수, 
                        //있으면 다시 돌아와서 다음 인접노드를 검색, 없으면 해당 노드의 인접노드를 검색.
    }
}