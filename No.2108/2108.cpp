#include <iostream>
#include <array>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    double avg = 0;
    array<int, 8001> numCount = {0};
    array<int, 8001>::iterator maxIndex;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
        avg += arr[i];
        numCount[arr[i] + 4000]++;
    }

    /*산술평균*/
    avg /= n; 
    avg > 0 ? avg += 0.5 : avg -= 0.5;
    cout << (int)avg << '\n';

    /*중앙값*/
    sort(arr, arr + n, greater<>());
    cout << arr[n / 2] << '\n';

    /*최빈값*/
    maxIndex = max_element(numCount.begin(), numCount.end()); 

    if (*maxIndex != *max_element(maxIndex + 1/*maxIndex보다 큰 수*/, numCount.end()))
    /*maxIndex 다음으로 큰 수 -> 최빈값중 두번째로 작은 값*/
        cout << (int)(maxIndex - numCount.begin()) - 4000 << "\n";
    else
        cout << (int)(max_element(maxIndex + 1, numCount.end()) - numCount.begin()) - 4000 << "\n";
    
    /*범위*/
    cout << arr[0] - arr[n - 1] << '\n';

    delete[] arr;
}