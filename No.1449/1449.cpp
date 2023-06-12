#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, L, Num, tapeNum = 0;
    cin >> N >> L;

    vector<float> tape;

    //������ ���� ���ϱ�
    for(int i = 0; i < N; i++){
        cin >> Num;

        tape.push_back(Num - 0.5); // ���� ��
        tape.push_back(Num); //����
        tape.push_back(Num + 0.5); //���� ��
    }

    // ���� ����
    sort(tape.begin(),tape.end());

    for(int i = 0; i < tape.size(); i++){ //������ ������ġ
        for(int j = i + 1; j < tape.size(); j++){
            if(tape[i] + L >= tape[j]){ //�ѹ��� �������� ��ġ ���ϱ�
                tape[j] = tape[i]; //���� ������ ����ϸ� ���� ���ڷ� ����
                i = j; //���� ������ �н�
            }
        }
    }
    
    for(int i = 0; i < tape.size(); i++){
        if(tape[i] != tape[i + 1]) tapeNum++;
    }

    cout << tapeNum <<"\n";
    return 0;
}

//Debug
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, L, Num, tapeNum = 0;
//     cin >> N >> L;

//     vector<float> tape;

//     // ������ ���� ���ϱ�
//     for (int i = 0; i < N; i++)
//     {
//         cin >> Num;

//         tape.push_back(Num - 0.5); // ���� ��
//         tape.push_back(Num);       // ����
//         tape.push_back(Num + 0.5); // ���� ��
//     }
//     cout << "���� �� : ";
//     for (int i = 0; i < tape.size(); i++)
//     {
//         cout << tape[i] << " ";
//     }
//     cout << "\n";
//     // ���� ����
//     sort(tape.begin(), tape.end());

//     for (int i = 0; i < tape.size(); i++)
//     { // ������ ������ġ
//         for (int j = i + 1; j < tape.size(); j++)
//         {
//             if (tape[i] + L >= tape[j])
//             {                      // �ѹ��� �������� ��ġ ���ϱ�
//                 tape[j] = tape[i]; // ���� ������ ����ϸ� ���� ���ڷ� ����
//                 i = j;             // ���� ������
//             }
//         }
//         cout << "������ �����ϴ� ��ġ : " << tape[i] << "\n";
//         cout << "������ ������ ��ġ : " << tape[i] + L << "\n";
//     }
//     cout << "���� �� : ";
//     for (int i = 0; i < tape.size(); i++)
//     {
//         cout << tape[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }