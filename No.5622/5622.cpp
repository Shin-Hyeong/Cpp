#include <iostream>
#include <string>
using namespace std;

int main () {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str;
    int add = 0;

    cin >> str;

    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < alphabet.length(); j++){
            if(str[i] == alphabet[j]){
                if(j == 0 || j == 1 || j == 2) add += 3;
                else if(j == 3 || j == 4 || j == 5) add += 4;
                else if (j == 6 || j == 7 || j == 8) add += 5;
                else if (j == 9 || j == 10 || j == 11) add += 6;
                else if (j == 12 || j == 13 || j == 14) add += 7;
                else if (j == 15 || j == 16 || j == 17 || j == 18) add += 8;
                else if (j == 19 || j == 20 || j == 21) add += 9;
                else if (j == 22 || j == 23 || j == 24 || j == 25) add += 10;
            }
        }
    }

    cout << add << endl;

    return 0;
}