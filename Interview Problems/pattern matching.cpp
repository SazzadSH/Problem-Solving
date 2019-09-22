// Given two strings, write a function to find out
// whether the second string is present in the first string.

#include <iostream>
#include <map>
#include <string>


// Function for pattern match detection
bool patternMatch(std::string str, std::string pattern)
{
    std::string temp;
    std::map <std::string, int> subStr;
    int strLen = str.length();
    subStr[pattern] = 0;

    for(int i = 0; i < strLen; i++)
    {
        if(str[i] != (strLen - 1))
        {
            for(int j = 1; j <= (strLen - (i + 1)); j++)
            {
                temp = str.substr(i, j);

                if(subStr[temp] >= 2)
                {
                    subStr[temp]++;
                }
                else
                {
                    subStr[temp] = 1;
                }
            }
        }
    }

    if(subStr[temp] >= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    std::string mainStr, pattern;
    getline(std::cin, mainStr);
    getline(std::cin, pattern);

    bool res = patternMatch(mainStr, pattern);

    if(res)
    {
        std::cout << "Pattern Matched!" << std::endl;
    }
    else
    {
        std::cout << "Pattern did not match!" << std::endl;
    }

    return 0;
}
