#include <iostream>
using namespace std;

int main () {
    int N, M, i, j, k;
    cin >> N >> M;
    int arr[N + 1] = {0}, temp[N + 1] = {0};

    for(int a = 1; a <= N; a++) arr[a] = a; //arr 배열 초기화

    for(int a = 0; a < M; a++){
        cin >> i >> j >> k;
        int begin = i;
        int mid = j - k + i + 1;

        for(int b = 1; b <= N; b++){ 
            temp[b] = arr[b];
        }

        for(int b = k; b <= j; b++){ //mid ~ end까지 재정렬
            arr[begin] = temp[b];
            begin++;
        }

        for(int c = i; c < k; c++){ //begin ~ mid - 1까지 재정렬
            arr[mid] = temp[c];
            mid++;
        }

    }
    for(int b = 1; b <= N; b++){
        cout << arr[b] << " ";
    }

    return 0;
}