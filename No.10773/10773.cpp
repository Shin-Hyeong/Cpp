#include <iostream>
#include <vector>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num, a, sum = 0;
    cin >> num;

    vector<int> stack;

    for(int i = 0; i < num; i++){
        cin >> a;
        if(a == 0) stack.pop_back();
        else stack.push_back(a);
    }
    
    if(stack.empty()) cout << "0\n";
    else {
        for(int i = 0; i < stack.size(); i++){
        sum += stack[i];
        }
        cout << sum << "\n";
    }
    stack.clear();
    return 0;
}