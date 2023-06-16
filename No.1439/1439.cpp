#include <iostream>
#include <string>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str;
    int one = 0, zero = 0;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(str[i] != str[i + 1] && str[i] == '0') zero++;
        else if(str[i] != str[i + 1] && str[i] == '1') one++;
    }
    
    if(zero > one) cout << one << "\n";
    else cout << zero << "\n";

    return 0;
}
