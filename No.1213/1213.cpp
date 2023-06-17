#include <iostream>
#include <string>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    string name;
    int odd = 0;
    int alphabet[26] = {0,};

    cin >> name;

    for(int i = 0; i  < name.size(); i++){
        if(name[i] == 65 + i) alphabet[i]++;
    }

    for(int i = 0; i < 26; i++){
        cout << alphabet[i] << " ";
        //if(alphabet[i] / 2 == 1) odd++;
    }




    return 0;
}