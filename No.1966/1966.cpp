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

        /*vector �Է�*/
        for(int i = 0; i < docNum; i++){
            cin >> a;
            vec.push_back(a);
        }

        /*�ڽź��� �ڿ� �ִ� ����� �켱���� ���� �� �ִ��� �˻�*/
        while(!vec.empty()){
            
        }

        /*����� - vector ���*/
        for(int i = 0; i < docNum; i++){
            cout << vec[i] << " ";
        }
        /*vector ����*/
        vec.clear();
    }
    /*vector �޸� ����*/
    vector<int>().swap(vec);
    return 0;
}