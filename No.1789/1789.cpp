#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long int S, add = 1, N = 0, total = 0;
    cin >> S;

    while(1){
        total += add;
        if(total > S){
            break;
        }
        N++;
        add++;
    }
    cout << N << "\n";
    return 0;
}