#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2, num1, num2, num3, num4;
    int minNum1, minNum2, maxNum1, maxNum2;
    cin >> str1 >> str2;

    for(int i = 0; i < str1.size(); i++){
        if(str1[i] == '5' || str1[i] == '6'){
            num1.push_back('5');
            num2.push_back('6');
        }
        else{
            num1.push_back(str1[i]);
            num2.push_back(str1[i]);
        }
    }

    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] == '5' || str2[i] == '6')
        {
            num3.push_back('5');
            num4.push_back('6');
        }
        else
        {
            num3.push_back(str2[i]);
            num4.push_back(str2[i]);
        }
    }
    minNum1 = stoi(num1);
    minNum2 = stoi(num3);
    maxNum1 = stoi(num2);
    maxNum2 = stoi(num4);

    cout << minNum1 + minNum2 << " " << maxNum1 + maxNum2 << "\n";
    return 0;
}