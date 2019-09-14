// Write a function to return the character present in
// the given string the highest number of times.

#include <iostream>
#include <string>

// Function to count highest occurred character.
char maxChar(std::string str)
{
    int charArr[256]; // Number of ASCII chars are 256

    for(int i = 0; i < 256; i++)
    {
        charArr[i] = 0;
    }

    int strLen = str.length(), maxCharCnt = 0;
    char charIndex = 0;

    for(int i = 0; i < strLen; i++)
    {
        charArr[str[i]]++;
    }

    for(int i = 0; i < 256; i++)
    {
        if(charArr[i] > maxCharCnt)
        {
            maxCharCnt = charArr[i];
            charIndex = i;
        }
    }

    return charIndex;
}

int main()
{
    std::string str;
    getline(std::cin, str);

    std::cout << maxChar(str) << std::endl;

    return 0;
}
