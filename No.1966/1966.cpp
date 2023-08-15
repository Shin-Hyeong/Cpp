#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int count = 0;
    int testNum, index, value;
    cin >> testNum;
    
    int docNum, order, ipt;

    while(testNum--){
        count = 0;
        cin >> docNum >> order;
        /*ť ����*/
        queue<pair<int, int>> que;
        priority_queue<int> priQue;
        /*ť�� �켱���� �Է�*/
        for(int i = 0; i < docNum; i++){
            cin >> ipt;
            que.push({i, ipt});
            priQue.push(ipt);
        }
        while(!que.empty()){
            /*ť�� �պκ� ����*/
            index = que.front().first;
            value = que.front().second;
            que.pop();

            /*ť�� �켱������ ���ٸ� pop*/
            if(priQue.top() == value){
                priQue.pop();
                count++;
                /*�ñ��� �ε����� �����ϸ� ���*/
                if(index == order){
                    cout << count << "\n";
                    break;
                }
            }
            /*ť�� �켱������ �ٸ��� �ٽ� ť�� push*/
            else que.push({index, value});
        }
    }

    return 0;
}