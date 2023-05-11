#include <iostream>
using namespace std;

int main() {
    int kg[2] = {5, 3}, setKg, count = 0;
    cin >> setKg;

    for(int i = 0; i < 2; i++){
        count = count + (setKg / kg[i]);
        setKg = setKg % kg[i];
    }

    if(setKg != 0) cout << -1 << "\n";
    else cout << count << "\n";

    return 0;
}