#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Deque(string Cmd, int Num);

vector<int> deque;

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(); cout.tie();

    int count, num;
    string command;

    cin >> count;

    for(int i = 0; i < count; i++){
        cin >> command >> num;
        Deque(command, num);
    }
    deque.clear();
    return 0;
}

void Deque(string Cmd, int Num){
    if(Cmd == "push_front") deque.insert(deque.begin(), Num);
    else if(Cmd == "push_back") deque.push_back(Num);
    else if(Cmd == "pop_front") {
        if(deque.empty()) cout << "-1\n";
        else {
            cout << deque[0] << "\n";
            deque.erase(deque.begin());
        }
    }
    else if(Cmd == "pop_back"){
        if(deque.empty()) cout << "-1\n";
        else{
            cout << deque[deque.size() - 1] << "\n";
            deque.pop_back();
        }
    }
    else if(Cmd == "size") cout << deque.size() << "\n";
    else if(Cmd == "empty"){
        if(deque.empty()) cout << "1\n";
        else cout << "0\n";
    }
    else if(Cmd == "front"){
        if (deque.empty()) cout << "-1\n";
        else{
            cout << deque[0] << "\n";
        }
    }
    else if(Cmd == "back"){
        if (deque.empty()) cout << "-1\n";
        else{
            cout << deque[deque.size() - 1] << "\n";
        }
    }
}