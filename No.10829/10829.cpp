#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> stack;

void function(string cmd, int num){
    /*push*/
    if (cmd == "push")
        stack.push_back(num);
    /*pop*/
    else if (cmd == "pop"){
        if (stack.empty() == 1)
            cout << "-1\n";
        else{
            cout << stack.back() << "\n";
            stack.pop_back();
        }
    }
    /*size*/
    else if (cmd == "size")
        cout << stack.size() << "\n";
    /*empty*/
    else if (cmd == "empty")
        cout << stack.empty() << "\n";
    /*top*/
    else if (cmd == "top"){
        if (stack.empty() == 1)
            cout << "-1\n";
        else
            cout << stack.back() << "\n";
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, num;
    string command;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> command;
        if(command == "push") cin >> num;
        function(command, num);
    }
    return 0;
}