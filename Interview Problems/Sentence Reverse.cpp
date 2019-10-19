#include <iostream>
#include <string>
#include <stack>

int main()
{
    std::stack <std::string> strStk;
    std::string str;

    while(std::cin.peek() != '\n')
    {
        std::cin >> str;
        strStk.push(str);
    }

    while(!strStk.empty())
    {
        std::cout << strStk.top() << " ";
        strStk.pop();
    }

    std::cout << std::endl;
    return 0;
}
