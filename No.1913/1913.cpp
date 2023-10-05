#include <iostream>
using namespace std;
int n, x, y, dir, findNum, cnt = 1, piv = 1;
int a[1001][1001];

void print()
{
    int foundX = 0, foundY = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
            if (findNum == a[i][j])
            {
                foundX = i + 1;
                foundY = j + 1;
            }
        }
        cout << '\n';
    }
    cout << foundX << " " << foundY << endl;
}

int main()
{
    cin >> n >> findNum;
    x = n / 2;
    y = n / 2;
    a[x][y] = 1;
    while (cnt < n * n)
    {
        if (dir == 0)
        {
            for (int k = 0; k < piv; k++)
            {
                a[--x][y] = ++cnt;
                if (cnt == n * n)
                    break;
            }
        }
        else if (dir == 1)
        {
            for (int k = 0; k < piv; k++)
                a[x][++y] = ++cnt;
            piv++;
        }
        else if (dir == 2)
        {
            for (int k = 0; k < piv; k++)
                a[++x][y] = ++cnt;
        }
        else if (dir == 3)
        {
            for (int k = 0; k < piv; k++)
                a[x][--y] = ++cnt;
            piv++;
        }
        dir = (dir + 1) % 4;
    }

    print();
}