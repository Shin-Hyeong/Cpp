#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int count , num , r = 0;
    string str , str1;
    cin >> num;
    count = num;
    for(int i = 0; i < num; i++){
        cin >> str;
        str1.clear();
        for(int j = 0; j < str.length(); j++){
            if(str[j] != str[j + 1]){ //���� ���ĺ��� �ٸ���
                str1.push_back(str[j]); //str1���ڿ��� str[j]�߰�
            }
        }
        // str1 ���ڿ��� ���� ���ڰ� �ִ��� Ȯ��
        for(int j = 0; j < str1.length() - 1; j++){
            for(int k = j + 1; k < str1.length(); k++){
                if(str1[j] == str1[k]) r++;
            }
        }
        if(r > 0){
            count--;
            r = 0;
        } 
    }

    cout << count << endl;
    return 0;
}