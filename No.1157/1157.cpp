#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int alphabet[26] = {0};
    cin >> str;
    int max = 0, index = 0 , count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] > 96) alphabet[str[i] - 97]++;
        else if(str[i] > 64) alphabet[str[i] - 65]++;
    }

    for(int i = 0; i < 26; i++){
        if(alphabet[i] > max){
            max = alphabet[i];
            index = i;
        } 
    }

    for(int i = 0; i < 26; i++){
        if(alphabet[i] == max) count++;
    }

    if(count == 1) cout << char(index + 65) << "\n";
    else if (count > 1) cout << "?\n";
 
    return 0;
}