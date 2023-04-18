#include <iostream>
using namespace std;

int main() {
    int num, add = 0;
    string str;
    cin >> num;
    cin >> str;

    str.resize(num);
    for(int i = 0; i < str.length(); i++){
        add += str[i] - 48;
    }

    cout << add << endl;

    return 0;
}