#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, arr[4], unit[4] = {25, 10, 5, 1};
    cin >> N;
    int money[N];

    for(int i = 0; i < N; i++){
        cin >> money[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 4; j++){
            arr[j] = money[i] / unit[j];
            money[i] = money[i] % unit[j];
        }
        for(int j = 0; j < 4; j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}