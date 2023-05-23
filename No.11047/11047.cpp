#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K, count = 0;
    cin >> N >> K;
    int amount[N];

    for(int i = 0; i < N; i++) cin >> amount[i];
    for(int i = N - 1; i >= 0; i--){
        count += K / amount[i];
        K = K % amount[i];
    }

    cout << count <<"\n";

    return 0;
}