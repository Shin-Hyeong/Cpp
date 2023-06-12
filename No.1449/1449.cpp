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

    //테이프 구간 구하기
    for(int i = 0; i < N; i++){
        cin >> Num;

        tape.push_back(Num - 0.5); // 구멍 전
        tape.push_back(Num); //구멍
        tape.push_back(Num + 0.5); //구멍 후
    }

    // 구간 정렬
    sort(tape.begin(),tape.end());

    for(int i = 0; i < tape.size(); i++){ //테이프 시작위치
        for(int j = i + 1; j < tape.size(); j++){
            if(tape[i] + L >= tape[j]){ //한번에 덮어지는 위치 구하기
                tape[j] = tape[i]; //같은 테이프 사용하면 같은 숫자로 변경
                i = j; //덮은 구간은 패스
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

//     // 테이프 구간 구하기
//     for (int i = 0; i < N; i++)
//     {
//         cin >> Num;

//         tape.push_back(Num - 0.5); // 구멍 전
//         tape.push_back(Num);       // 구멍
//         tape.push_back(Num + 0.5); // 구멍 후
//     }
//     cout << "수정 전 : ";
//     for (int i = 0; i < tape.size(); i++)
//     {
//         cout << tape[i] << " ";
//     }
//     cout << "\n";
//     // 구간 정렬
//     sort(tape.begin(), tape.end());

//     for (int i = 0; i < tape.size(); i++)
//     { // 테이프 시작위치
//         for (int j = i + 1; j < tape.size(); j++)
//         {
//             if (tape[i] + L >= tape[j])
//             {                      // 한번에 덮어지는 위치 구하기
//                 tape[j] = tape[i]; // 같은 테이프 사용하면 같은 숫자로 변경
//                 i = j;             // 덮은 구간은
//             }
//         }
//         cout << "테이프 시작하는 위치 : " << tape[i] << "\n";
//         cout << "테이프 끝나는 위치 : " << tape[i] + L << "\n";
//     }
//     cout << "수정 후 : ";
//     for (int i = 0; i < tape.size(); i++)
//     {
//         cout << tape[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }