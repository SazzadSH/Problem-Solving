//Given a string, write a function return the string reversed.

#include <iostream>
#include <string>

std::string revStr(std::string str) //Function to reverse the String
{
    int len = str.length();

    if(len == 0)
    {
        return str;
    }
    else
    {
        char temp;

        for(int i = 0, j = len -1; i < j; i++, j--)
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }

        return str;
    }
}

int main()
{
    std::string Str;

    getline(std::cin, Str);

    std::cout << revStr(Str);

    return 0;
}
