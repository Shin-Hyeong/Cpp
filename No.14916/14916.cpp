#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, five = 0, three = 0;
    cin >> N;

    five = N / 5;

    while(1){
        if(five < 0) {
            cout << "-1\n";
            return 0;
        }
        if((N - (5 * five)) % 2 == 0){
            three = ((N - (5 * five)) / 2);
            break;
        }
        five--;
    }
    cout << five + three << "\n";

    return 0;
}