#include <iostream>
#include <vector>
using namespace std;

void dfs(int x);

int number = 7; //��� ����
int c[7]; //�湮 Ȯ��
vector<int> a[8]; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    /*1�� 2�� ����*/
    a[1].push_back(2);
    a[2].push_back(1);
    /*1�� 3�� ����*/
    a[1].push_back(3);
    a[3].push_back(1);
    /*2�� 3�� ����*/
    a[2].push_back(3);
    a[3].push_back(2);
    /*2�� 4�� ����*/
    a[2].push_back(4);
    a[4].push_back(2);
    /*2�� 5�� ����*/
    a[2].push_back(5);
    a[5].push_back(2);
    /*4�� 5�� ����*/
    a[4].push_back(5);
    a[5].push_back(4);
    /*3�� 6�� ����*/
    a[3].push_back(6);
    a[6].push_back(3);
    /*3�� 7�� ����*/
    a[3].push_back(7);
    a[7].push_back(3);
    /*6�� 7�� ����*/
    a[7].push_back(6);
    a[6].push_back(7);

    dfs(1);

    return 0;
}

void dfs(int x){
    if(c[x]) return;
    c[x] = true;
    cout << x << " ";
    for(int i = 0; i < a[x].size(); i++){
        int y = a[x][i];
        dfs(y);
    }
}