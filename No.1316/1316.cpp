#include <iostream>
#include <string>
using namespace std;

int main() {
    int num , k = 1, count = 0, index = 0 , num1 = 0;
    //string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string str;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> str;
        for(int j = 0; i < str.length() - 1; j++){
            switch(1){
                if(str[j] == str[j + k]){
                    num1++;
                    k++;
                }
                else if(str[j] != str[j + k]){
                    str.erase(j + 1, k);
                    k = 1;
                    break;
                }
            }
        }
    }

    cout << str;
    return 0;
}