#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    float arr[N] , max = 0, avg = 0;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++){
        if(max < arr[i]) max = arr[i];
    }

    for(int i = 0; i < N; i++){
        arr[i] = arr[i] / max * 100;
        avg += arr[i];
    }

    cout << fixed;
    cout.precision(5);

    cout << avg / N;

    return 0;
}