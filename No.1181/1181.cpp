#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    

    int N;
    string temp;
    cin >> N;

    vector<string> str;

    // 입력
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        str.push_back(temp);
    }

    // 정렬
    sort(str.begin(), str.end());

    // 중복 제거
    vector<string>::iterator it = unique(str.begin(), str.end());
    str.erase(it, str.end());

    // 길이에 따라 출력
    int num = 1;
    while(true)
    {
        for (int i = 0; i < str.size(); i++)
        {   
            // 짧은것 부터 출력
            if (str[i].length() == num)
            {
                cout << str[i] << endl;
                str.erase(str.begin() + i);
                // 출력했으면 앞으로 당겨짐으로 숫자를 뒤로
                i--;
            }
        }
        num++;
        // 다 출력했으면 탈출
        if (str.size() == 0)
            break;
    }

    return 0;
}