#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int alphabet[26], error = 0, mid_index = 1;
    string name;
    cin >> name;

    for(int i = 0; i < name.size(); i++) alphabet[name[i] - 'A']++;

    for(int i = 0; i < 26; i++){
        if(alphabet[i] > 0){ //���ĺ��� �����ϸ�
            if(alphabet[i] % 2 == 1){ // ���ĺ� ������ Ȧ�� �̸�
                mid_index = i; //�߾ӿ� �ش� ���ĺ� �Է�
                alphabet[i]--; //alphabet�� ¦���� ����
                error++;
            }
        }
    }
    
    if(error > 1) cout << "I'm Sorry Hansoo\n"; //Ȧ���� ���ĺ��� 2�� �̻��̸� ����
    else{
        string answer = "", temp = "";
        for(int i = 0; i < 26; i++){
            if(alphabet[i] > 0){ //���ĺ��� �����ϸ�
                for(int j = 0; j < alphabet[i] / 2; j++){ //���ĺ��� ������ ¦���̸�
                    answer += i + 'A';
                }
            }
        }
        temp = answer;
        reverse(temp.begin(), temp.end());
        if(mid_index != -1) answer += mid_index + 'A';
        answer += temp;
        cout << answer << "\n"; 
    }

    return 0;
}