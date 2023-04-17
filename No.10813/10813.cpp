#include <iostream>
using namespace std;

int main(){
    int N, M, a, b;
    cin >> N >> M;
    int arr[N];

    for(int i = 0; i < N; i++){
        arr[i] = i + 1;
    }

    for(int j = 0; j < M; j++){
        int temp = 0;
        cin >> a >> b;
        temp = arr[a - 1];
        arr[a - 1] = arr[b - 1];
        arr[b - 1] = temp;
    }

    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}