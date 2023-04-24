#include <iostream>
using namespace std;

int main () {
    int num;
    char arr[] = "*";
    cin >> num;
    int count = num - 1;
    int sharp = num - 1;


    for(int i = 0; i < num - 1; i++){
        for(int j = count; j > 0; j--) cout << " ";
        for(int k = sharp; k < num; k++) cout << "*";
        cout << "\n";
        count--;
        sharp -= 2;
    }
    for(int l = 0; l < num * 2 - 1; l++) cout << "*";
    cout << "\n";

    count = num - 1;
    sharp = (num - 1) * 2 - 1;

    for(int i = 0; i < num - 1; i++){
        for(int j = count; j < num; j++) cout << " ";
        for(int k = sharp; k > 0; k--) cout << "*";
        cout << "\n";
        count--;
        sharp -= 2;
    }
    return 0;
}