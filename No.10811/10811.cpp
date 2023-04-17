#include <iostream>
using namespace std;

int main(){
    int N, M, i, j, temp = 0;
    cin >> N >> M;
    int arr[N] = {0};

    for (int a = 0; a < N; a++) {
        arr[a] = a + 1;
    }

    for(int a = 0; a < M; a++){
        cin >> i >> j;
        for(int b = i - 1; b <= j - 1; b++){
            temp = arr[b];
            arr[b] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for(int a = 0; a < N; a++){
        cout << arr[a] << " ";
    }

    return 0;
}