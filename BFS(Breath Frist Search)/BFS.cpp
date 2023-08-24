#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> a[7 + 1]; // 8���� �迭�� ���� vector ���¸� ��.
void bfs(int start);

int main(){
    ios_base:: sync_with_stdio(false);
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

    bfs(1);

    return 0;
}

void bfs(int start){
    queue<int> q;
    q.push(start); //ó�� �������� Queue�� ����.
    c[start] = true; // �������� Ȯ���ߴ�(�湮�ߴ�)
    while(!q.empty()){ //Queue�� ������ �ִٸ� ����
        int x = q.front();
        q.pop();
        cout << x << " "; //Queue �� �տ� �ִ� ��� ��ȣ�� ���
        for(int i = 0; i < a[x].size(); i++){
            int y = a[x][i];    //Queue �� �տ� �ִ� ���� ������ ��� �˻�
            if(!c[y]){          //�˻� �� ��尡 �湮�� ���� ���ٸ� ����
                q.push(y);      //�湮�� �� ���� ��带 Queue�� �Է�
                c[y] = true;    //�湮�� �� �ִٰ� ǥ��.
            }
        }
    }
}