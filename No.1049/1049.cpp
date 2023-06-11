#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    int lowPrice = 0, lowPackage = 1000, lowPiece = 1000;
    cin >> N >> M;
    int price [M][2];

    for(int i = 0; i < M; i++){
        cin >> price[i][0] >> price[i][1];
        //������ ��Ű�� �˻�
        if(lowPackage > price[i][0]) lowPackage = price[i][0];
        //������ ���� �˻�
        if(lowPiece > price[i][1]) lowPiece = price[i][1];
    }
    //��Ű���� ���� 6�� ���� ��
    if(lowPackage < lowPiece * 6) lowPrice = lowPackage * (N / 6);
    else lowPrice = lowPiece * 6 * (N / 6);
    //��Ű���� ���� 6 % N ���� ��
    if(lowPackage < lowPiece * (N % 6)) lowPrice += lowPackage;
    else lowPrice += lowPiece * (N % 6);

    cout << lowPrice << "\n";
    
    return 0;
}
