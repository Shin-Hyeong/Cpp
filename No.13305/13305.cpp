#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    int distance[N - 1], distance1[N - 1], price[N], price1[N];
    for(int i = 0; i < N - 1; i++){
        cin >> distance[i];
        distance1[i] = distance[i];
    }
    for(int i = 0; i < N; i++){
        cin >> price[i];
        price1[1] = price[i];
    }

    int payment = price[0] * distance[0];

    return 0;
}