// Write a function to return true if the given string
// is palindrome, else return false.
// Palindrome is the string which is same to when it is
// is reversed.

#include <iostream>
#include <string>

// Function to determine if a string is palindrome.
bool isPalindrome(std::string str)
{
    int len = str.length();

    if(len < 2)
    {
        return 1;
    }
    else
    {
        for(int i = 0, j = (len - 1); i < j; i++, j--)
        {
            if(str[i] != str[j])
            {
                return 0;
            }
        }

        return 1;
    }
}

int main()
{
    std::string str;
    getline(std::cin, str);

    bool res = isPalindrome(str);

    if(res == true)
    {
        std::cout << "Yes!" << std::endl;
    }
    else
    {
        std::cout << "No!" << std::endl;
    }

    return 0;
}
