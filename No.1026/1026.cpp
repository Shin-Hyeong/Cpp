#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int i, int j) { return j < i;}

int main () {
    int N, total = 0;
    cin >> N;
    int A[N], B[N], B1[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
        B1[i] = B[i];
    }

    sort(B1, B1 + N, desc);
    sort(A, A + N);

    
    for(int i = 0; i < N; i++){
        total += A[i] * B1[i];
    }

    cout << total <<"\n";

    return 0;
}

