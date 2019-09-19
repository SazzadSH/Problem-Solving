#include <iostream>
#include <stack>
#include <queue>

int main()
{
    std::string str;
    std::stack <char> stk, stk2;

    std::cin >> str;

    int strLen = str.length();

    for(int i = 0; i < strLen; i++)
    {
        if(str[i] != 'B')
        {
            stk.push(str[i]);
        }
        else if(!stk.empty())
        {
            stk.pop();
        }
    }

    while(!stk.empty())
    {
        stk2.push(stk.top());
        stk.pop();
    }

    while(!stk2.empty())
    {
        std::cout << stk2.top();
        stk2.pop();
    }

    std::cout << std::endl;

    return 0;
}
