#include <iostream>
#include <string>
using namespace std;

int main() {
    int idx;
    string str;
    string Croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj","s=", "z="};
    cin >> str;

    for(int i = 0; i < 8; i++){
        while(1){
            idx = str.find(Croatia[i]);
            if(idx == string::npos) break;
            str.replace(idx, Croatia[i].size(), "@");
        }
    }

    cout << str.length() << endl;

    return 0;
}