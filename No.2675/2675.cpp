#include <iostream>
#include <string>
using namespace std;

int main (){
    string str;
    int n, m, k = 0;
    cin >> n;
     
    for(int i = 0; i < n; i++){
        cin >> m >> str; 
        for(int j = 0; j < m * str.length(); j++){
            cout << str[k];
            if((j + 1) % m == 0) k++;
        }
        cout << "\n";
        k = 0;
    }

    return 0;
}