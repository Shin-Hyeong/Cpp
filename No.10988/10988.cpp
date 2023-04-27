#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, oppstr;
    int result = 1;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        oppstr.append(str, str.length() - i - 1, 1);
    }

    if (str != oppstr)
        result = 0;

    cout << result << endl;

    return 0;
}