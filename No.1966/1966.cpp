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
        /*큐 생성*/
        queue<pair<int, int>> que;
        priority_queue<int> priQue;
        /*큐에 우선순위 입력*/
        for(int i = 0; i < docNum; i++){
            cin >> ipt;
            que.push({i, ipt});
            priQue.push(ipt);
        }
        while(!que.empty()){
            /*큐의 앞부분 저장*/
            index = que.front().first;
            value = que.front().second;
            que.pop();

            /*큐와 우선순위가 같다면 pop*/
            if(priQue.top() == value){
                priQue.pop();
                count++;
                /*궁금한 인덱스와 동일하면 출력*/
                if(index == order){
                    cout << count << "\n";
                    break;
                }
            }
            /*큐와 우선순위가 다르면 다시 큐에 push*/
            else que.push({index, value});
        }
    }

    return 0;
}