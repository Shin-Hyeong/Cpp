#include<iostream>
#include<string>
using namespace std;

int main() {
    int N, count = 1;
    string str;

    cin >> N;
    cin >> str;

    for(int i = 0; i < N; i++){
        if(str[i] == 'S'){
            count++;
        }
        if(str[i] == 'L'){
            count++;
            i++;
        }
    }
    if(count > N) count = N;

    cout << count << "\n";
    return 0;
}