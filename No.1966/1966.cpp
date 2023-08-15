#include <iostream>
#include <vector>
#include <algorithm>
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

        /*자신보다 우선순위가 높은게 있으면 뒤로 이동*/
        while(!vec.empty()){
            if(vec.front() < *max_element(vec.begin() + 1, vec.end())){
                vec.push_back(vec.front());
                vec.erase(vec.begin());
            }
            else{
                cout << vec.front() << " ";
                vec.erase(vec.begin());
            }
        }
        cout << "\n";
        /*vector 비우기*/
        vec.clear();
    }
    /*vector 메모리 해제*/
    vector<int>().swap(vec);
    return 0;
}