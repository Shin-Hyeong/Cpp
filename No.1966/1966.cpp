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

        /*vector �Է�*/
        for(int i = 0; i < docNum; i++){
             cin >> a;
             vec.push_back(a);
        }

        /*�ڽź��� �켱������ ������ ������ �ڷ� �̵�*/
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
        /*vector ����*/
        vec.clear();
    }
    /*vector �޸� ����*/
    vector<int>().swap(vec);
    return 0;
}