#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, W1, weight = 0;
    cin >> N;
    int rope[N];

    for (int i = 0; i < N; i++)
    {
        cin >> rope[i];
    }
    sort(rope, rope + N, greater<int>()); // ��������

    W1 = rope[0]; // ó�� ����
    for (int i = 1; i < N; i++)
    {
        weight = rope[i] * (i + 1); // ���� ����
        if (W1 < weight)
        {
            W1 = weight;
        }
    }

    cout << W1 << "\n";

    return 0;
}