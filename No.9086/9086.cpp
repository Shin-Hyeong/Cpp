#include <iostream>
#include <string>
using namespace std;

int main () {
    string str;
    int num;

    cin >> num;
    
    for(int i = 0; i < num; i++){
        cin >> str;
        cout << str.front() << str.back() << endl;
    }

    return 0;
}