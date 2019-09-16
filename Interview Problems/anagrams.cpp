// Determine if two strings are anagram
// Return true or false
// whitespace and punctuations are ignored
// Capital & Lower case letters are considered same.

#include <iostream>
#include <string>
#include <map>

//Function to determine if strings are Anagram
bool isAnagram(std::string str1, std::string str2)
{
    int strLen1, strLen2;

    strLen1 = str1.length();
    strLen2 = str2.length();

    std::map <char, int> strMap1, strMap2;

    for(int i = 0; i < strLen1; i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] = str1[i] + ('a' - 'A');
        }

        if((str1[i] >= '0' && str1[i] <= '9') || (str1[i] >= 'a' && str1[i] <= 'z'))
        {
            if(strMap1[str1[i]] >= 1)
            {
                strMap1[str1[i]] += 1;
            }
            else
            {
                strMap1[str1[i]] = 1;
            }
        }
    }


    for(int i = 0; i < strLen2; i++)
    {
        if(str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] = str2[i] + ('a' - 'A');
        }

        if((str2[i] >= '0' && str2[i] <= '9') || (str2[i] >= 'a' && str2[i] <= 'z'))
        {
            if(strMap2[str2[i]] >= 1)
            {
                strMap2[str2[i]] += 1;
            }
            else
            {
                strMap2[str2[i]] = 1;
            }
        }
    }

    if(strMap2 == strMap1)
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
    std::string str1, str2;

    getline(std::cin, str1);
    getline(std::cin, str2);

    if(isAnagram(str1, str2))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
