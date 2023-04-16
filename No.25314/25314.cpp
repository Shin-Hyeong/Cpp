#include <iostream>
using namespace std;

int main(){
    int N, a;
    cin >> N;
    a = N / 4;
    
    for(int i = 0; i < a; i++){
        cout << "long ";
    }
    cout << "int" << endl;

    return 0;
}