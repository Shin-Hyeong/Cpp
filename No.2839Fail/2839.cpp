#include <iostream>
using namespace std;

int main() {
    int kg[2] = {5, 3}, setKg, count = 0;
    cin >> setKg;

    //6(0, 2) , 12(0, 4), 15(3, 0), 21(3, 2), 24(3, 4)
    //15이상 --> 5 나눈 후 3 나누기
    //15미만 3, 5의 배수 아닌 수 --> 5를 한번씩 빼고 3이 나눠 떨어지나 
    //15미만 3의 배수 --> setKg / 3
    //15미만 5의 배수 --> setKg / 5

    if((setKg / 3) < 5 && setKg % 3 == 0) count = setKg / 3;

    if(setKg != 0) cout << -1 << "\n";
    else cout << count << "\n";

    return 0;
}