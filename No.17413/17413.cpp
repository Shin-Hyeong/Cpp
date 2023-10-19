#include <iostream>
#include <stack>
#include <string>
using namespace std;

void stackPrint(stack<char>& stack)
{
    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }
}
int main()
{
    stack<char> stack;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        // < >
        if (str[i] == '<')
        {   
            // 앞에 word가 있다면 stack 구조를 이용해서 reverse
            stackPrint(stack);

            // <tag>
            while (1)
            {   
                // > 가 나올때까지 그대로 출력
                cout << str[i];
                if (str[i] == '>')
                    break;
                i++;
            }
        }
        // space
        else if (str[i] == ' ')
        {
            stackPrint(stack);
            cout << " ";
        }
        // word
        else
        {
            stack.push(str[i]);
        }
    }
    stackPrint(stack);
}
