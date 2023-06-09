#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int P, L, V, day = 0, N = 1;
    
    while(1){
        cin >> L >> P >> V;

        if(P == 0 && L == 0 && V == 0) return 0;

        day = (V / P) * L;
        if(V % P > L) day += L;
        else day += (V % P);

        cout << "Case " << N << ": " << day << endl;
        N++;
        day = 0;
    }  
}