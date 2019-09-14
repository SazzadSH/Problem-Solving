// Write a function to return the character present in
// the given string the highest number of times.

#include <iostream>
#include <string>
#include <map>

char maxChar(std::string str)
{
    int strLen = str.length();

    if(strLen < 1)
    {
        return -1;
    }
    else
    {
        std::map <char, int> charCount;

        for(int i = 0; i < strLen; i++)
        {
            if(charCount[str[i]] < 1)
            {
                charCount[str[i]] = 1;
            }
            else
            {
                charCount[str[i]] += 1;
            }
        }

        std::map <char, int>::iterator itr;
        int maxCharCount = 0;
        char charIndex;

        for(itr = charCount.begin(); itr != charCount.end(); itr++)
        {
            if(itr->second > maxCharCount)
            {
                maxCharCount = itr->second;
                charIndex = itr->first;
            }
        }

        return charIndex;
    }
}

int main()
{
    std::string str;
    getline(std::cin, str);

    std::cout << maxChar(str) << std::endl;

    return 0;
}
