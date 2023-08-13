#include <iostream>
#include <vector>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num, docNum, prio, a;
    int inCount = 0, outCount = 0;
    vector<int> vec;

    cin >> num;
    while(num--){
        cin >> docNum >> prio;

        /*vector 입력*/
        for(int i = 0; i < docNum; i++){
            cin >> a;
            vec.push_back(a);
        }

        /*자신보다 뒤에 있는 요소중 우선순위 높은 게 있는지 검색*/
        while(!vec.empty()){
            
        }

        /*디버그 - vector 출력*/
        for(int i = 0; i < docNum; i++){
            cout << vec[i] << " ";
        }
        /*vector 비우기*/
        vec.clear();
    }
    /*vector 메모리 해제*/
    vector<int>().swap(vec);
    return 0;
}