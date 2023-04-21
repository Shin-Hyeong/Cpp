#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 1, space = 32;
    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        if((char)space == str[i]) count++;
    }

    if(str.front() == (char)space) count--;
    if(str.back() == (char)space) count--;

    cout << count <<endl;

    return 0;
}