#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N, total = 0;
    cin >> N;

    int time[N], plusTime[N];
    for(int i = 0; i < N; i++){
        cin >> time[i];
    }

    sort(time, time + N);
    plusTime[0] = time[0];
    total = plusTime[0];

    for (int i = 1; i < N; i++)
    {
        plusTime[i] = plusTime[i - 1] + time[i];
        total += plusTime[i];
    }

    cout << total <<"\n";

    return 0;
}