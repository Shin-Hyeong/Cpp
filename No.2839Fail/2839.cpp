#include <iostream>
using namespace std;

int main() {
    int kg[2] = {5, 3}, setKg, count = 0;
    cin >> setKg;

    //6(0, 2) , 12(0, 4), 15(3, 0), 21(3, 2), 24(3, 4)
    //15�̻� --> 5 ���� �� 3 ������
    //15�̸� 3, 5�� ��� �ƴ� �� --> 5�� �ѹ��� ���� 3�� ���� �������� 
    //15�̸� 3�� ��� --> setKg / 3
    //15�̸� 5�� ��� --> setKg / 5

    if((setKg / 3) < 5 && setKg % 3 == 0) count = setKg / 3;

    if(setKg != 0) cout << -1 << "\n";
    else cout << count << "\n";

    return 0;
}