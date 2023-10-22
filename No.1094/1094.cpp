#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int X, count = 0;
    cin >> X;

    while (X > 0)
    {
        if (X % 2 == 1)
        {
            count++;
        }
        X /= 2;
    }

    cout << count << endl;

    return 0;
}