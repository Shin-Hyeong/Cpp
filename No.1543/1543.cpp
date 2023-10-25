#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    string str, search;

    getline(cin,str);
    getline(cin,search);

    int length = search.length();

    int count = 0;

    while(true)
    {
        // 문자열 검색
        int idx = str.find(search);
        
        // 문자열 존재하면
        if (str.find(search) != string::npos)
        {   
            // idx 주소 받기
            auto it = str.begin() + idx;
            // 문자열 삭제
            str = str.substr(idx + length);
            // count++
            count++;
            continue;
        }
        // 문자열 없으면 탈출
        else
            break;
    }

    cout << count << endl;

    return 0;
}