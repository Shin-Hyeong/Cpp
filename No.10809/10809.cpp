#include <iostream>
#include <string>
using namespace std;

int main () {
    string str;
    string al = "abcdefghijklmnopqrstuvwxyz";
    //int arr[26];
    //fill_n(arr, 26, -1);

    cin >> str;

    // for(int i = 0; i < str.length(); i++){
    //     for(int j = 97; j < 123; j++){
    //         if(str[i] == (char)j) {
    //             if(arr[j - 97] == -1) arr[j - 97] = i;
    //         }
    //     }
    // }
    // for(int i = 0; i < 26; i++){
    //     cout << arr[i] << " ";
    // }

    for(int i = 0; i < al.length(); i++){
        cout << (signed)str.find(al[i]) << " ";
    }

    return 0;
}