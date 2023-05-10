#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int time;
    int setTime[3] = {300, 60, 10}, count[3] = {0};
    cin >> time;

    for(int i = 0; i < 3; i++){
        count[i] = time / setTime[i];
        time = time % setTime[i];
    }

    if(time != 0) cout << -1 << "\n";
    else{
        for(int i = 0; i <3; i++) cout << count[i] << " ";
    }
    cout << "\n";

    return 0;
}