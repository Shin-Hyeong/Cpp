#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> deque;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();

    int count, num;
    string command;

    cin >> count;

    while(count--){
        cin >> command;

        /*push_front*/
        if(command == "push_front"){
            cin >> num;
            deque.insert(deque.begin(), num);
        }

        /*push_back*/
        else if(command == "push_back"){
            cin >> num;
            deque.push_back(num);
        }

        /*pop_front*/
        else if(command == "pop_front"){
            if(deque.empty()) cout << "-1\n";
            else {
                cout << deque.front() << "\n";
                deque.erase(deque.begin());
            }
        }

        /*pop_back*/
        else if(command == "pop_back"){
            if(deque.empty()) cout << "-1\n";
            else{
                cout << deque.back() << "\n";
                deque.pop_back();
            }
        }

        /*size*/
        else if(command == "size"){
            cout << deque.size() << "\n";
        }

        /*empty*/
        else if(command == "empty"){
            if(deque.empty()) cout << "1\n";
            else cout << "0\n";
        }

        /*front*/
        else if(command == "front"){
            if(deque.empty()) cout << "-1\n";
            else cout << deque.front() << "\n";
        }

        /*back*/
        else if(command == "back"){
            if(deque.empty()) cout << "-1\n";
            else cout << deque.back() << "\n";
        }
    }
    deque.clear();
    return 0;
}