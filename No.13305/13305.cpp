#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int cityCount, max, totalLength = 0;
    cin >> cityCount;
    int roadLength[cityCount - 1], priceOfGas[cityCount];

    // 도시간의 거리
    for (int i = 0; i < cityCount - 1; ++i)
    {
        cin >> roadLength[i];
        totalLength += roadLength[i];
    }

    // 도시별 기름 값
    for (int i = 0; i < cityCount; ++i)
    {
        cin >> priceOfGas[i];
    }
    
    // 첫 도시에서 풀로 채워서 사용하는 기름
    max = priceOfGas[0] * totalLength;

    // 2번쨰 도시에서 마지막 도시까지의 거리
    totalLength -= roadLength[0];

    // 2번쨰 도시까지 가는 기름
    int temp = priceOfGas[0] * roadLength[0];

    for (int i = 1; i < cityCount - 1; ++i)
    {   
        // temp(이전 도시까지의 사용 기름) + priceOfGas(해당 도시의 기름 값) * totalLength(남은 총 거리)
        if (max > temp + (priceOfGas[i] * totalLength))
            max = temp + priceOfGas[i] * totalLength;
        
        temp += (priceOfGas[i] * roadLength[i]);
    }
    cout << max << endl;

    return 0;
}