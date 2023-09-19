#include <iostream>
#include <string>
using namespace std;

int main()
{
    string subject, score;
    float credit , totalCredit = 0.f, totalScore = 0.f;

    for(int i = 0; i < 20; i++){
        cin >> subject >> credit >> score;
        totalCredit += credit;
        if(score == "A+") totalScore += (4.5 * credit);
        else if(score == "A0") totalScore += (4.0 * credit);
        else if (score == "B+")totalScore += (3.5 * credit);
        else if (score == "B0") totalScore += (3.0 * credit);
        else if (score == "C+") totalScore += (2.5 * credit);
        else if (score == "C0") totalScore += (2.0 * credit);
        else if (score == "D+") totalScore += (1.5 * credit);
        else if (score == "D0") totalScore += (1.0 * credit);
        else if (score == "F") totalScore += 0;
        //학점 P에 대한 연산 필요
    }

    cout.setf(ios::fixed);
    cout.precision(6);
    cout << totalScore / totalCredit << "\n";
    return 0;
}