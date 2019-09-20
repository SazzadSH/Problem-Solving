#include <iostream>
#include <string>
#include <map>
#include <iterator>

// Function to determine if the string is valid
std::string isValid(std::string str)
{
    std::map <char, int> charMap;
    std::map <char, int>::iterator itr;
    int strLen = str.length(), val1, val2 = 0;

    if(strLen < 3)
    {
        return "YES";
    }

    for(int i = 0; i < strLen; i++)
    {
        if(charMap[str[i]] >= 1)
        {
            charMap[str[i]]++;
        }
        else
        {
            charMap[str[i]] = 1;
        }
    }
    itr = charMap.begin();
    val1 = itr->second;
    for(itr = charMap.begin(); itr != charMap.end(); itr++)
    {
        if(itr->second != val1)
        {
            val2++;
        }

        if(val2 >= 2)
        {
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    std::string str;
    getline(std::cin, str);

    std::cout << isValid(str) << std::endl;
    return 0;
}
