#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int L, x;
    cin >> L;

    // 배열 생성
    int S[L];

    // 배열 값 입력
    for (int i = 0; i < sizeof(S)/sizeof(int); i++)
    {
        cin >> S[i];
    }
    cin >> x;

    // 같은 값이 있으면 0
    for (int i = 0; i < sizeof(S) / sizeof(int); i++)
    {
        if (S[i] == x)
        {
            cout << 0;
            return 0;
        }
    }

    int min = -1, max = 1001;
    int count = 0;

    // max / min 구하기
    for (int i = 0; i < sizeof(S)/sizeof(int); i++)
    {   
        // min
        if (x > S[i] && min < S[i])
        {
            min = S[i];
        }
        // max
        if (x < S[i] && max > S[i])
        {
            max = S[i];
        }
    }

    // 구간 구하기
    for (int i = min + 1; i <= x; i++)
    {
        for (int j = x; j <= max - 1; j++)
        {
            if (i == j)
                continue;
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}