#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  money, count = 0;
    int coin[6] = {500, 100, 50, 10, 5, 1};

    cin >> money;
    money = 1000 - money;
    for(int i = 0; i < 6; i++){
        if(money >= coin[i]) {
            count = count + (money / coin[i]);
            money = money % coin[i];
        }
    }

    cout << count << "\n";
    return 0;
}