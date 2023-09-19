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
        if(alphabet[i] > 0){ //알파벳이 존재하면
            if(alphabet[i] % 2 == 1){ // 알파벳 갯수가 홀수 이면
                mid_index = i; //중앙에 해당 알파벳 입력
                alphabet[i]--; //alphabet을 짝수로 만듬
                error++;
            }
        }
    }
    
    if(error > 1) cout << "I'm Sorry Hansoo\n"; //홀수인 알파벳이 2개 이상이면 실패
    else{
        string answer = "", temp = "";
        for(int i = 0; i < 26; i++){
            if(alphabet[i] > 0){ //알파벳이 존재하면
                for(int j = 0; j < alphabet[i] / 2; j++){ //알파벳의 갯수가 짝수이면
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