#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    string revStr1, revStr2;

    for(int i = 3; i > 0; i--){
        revStr1.append(str1, i - 1, 1);
        revStr2.append(str2, i - 1, 1);
    }

    if(revStr1 > revStr2) cout << revStr1 << endl;
    else if (revStr1 < revStr2) cout <<revStr2 << endl;

    return 0;
}