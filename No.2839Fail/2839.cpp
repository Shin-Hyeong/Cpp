#include <iostream>
using namespace std;

int main() {
    int kg, a, b; //a : 5Kg, b : 3Kg
    cin >> kg;
    a = kg / 5; // 입력 Kg를 5로 나눈 몫.
    while(1){
        if(a < 0){ //5로 나눈 몫이 음수이면  -1 
            cout << "-1\n";
            return 0;
        }
        if((kg - ( 5 * a)) % 3 == 0){ // 5로 나눈 후 3으로 나누어떨어질 때까지
            b = (kg -(5 * a)) / 3;    // 3Kg짜리 개수
            break;
        }
        a--; //5로 나누고 3으로 처음 나누었던 몫을 -1 감소
    }
    cout << a + b; 
    return 0;


    //먼저 5Kg로 나눠 본 후에, 3Kg으로 나눠 떨어지면 바로 정답.
    //안 나누어떨어지면 5Kg의 봉지를 한개 씩 줄여가면서 3Kg를 늘린다.
}