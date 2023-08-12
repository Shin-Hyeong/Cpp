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

    /*������*/
    avg /= n; 
    avg > 0 ? avg += 0.5 : avg -= 0.5;
    cout << (int)avg << '\n';

    /*�߾Ӱ�*/
    sort(arr, arr + n, greater<>());
    cout << arr[n / 2] << '\n';

    /*�ֺ�*/
    maxIndex = max_element(numCount.begin(), numCount.end()); 

    if (*maxIndex != *max_element(maxIndex + 1/*maxIndex���� ū ��*/, numCount.end()))
    /*maxIndex �������� ū �� -> �ֺ��� �ι�°�� ���� ��*/
        cout << (int)(maxIndex - numCount.begin()) - 4000 << "\n";
    else
        cout << (int)(max_element(maxIndex + 1, numCount.end()) - numCount.begin()) - 4000 << "\n";
    
    /*����*/
    cout << arr[0] - arr[n - 1] << '\n';

    delete[] arr;
}