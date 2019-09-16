// Write a function that turns first letter of each
// word capital of a given string.
// Example: hello, world! = Hello, World!

#include <iostream>
#include <string>

// Function to capitalize words
std::string capitalizer(std::string str)
{
    int strLen = str.length();

    for(int i = 0; i < strLen; i++)
    {
        if((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - ('a' - 'A');
        }
        else if((str[i - 1] >= '0' && str[i - 1] <= '9') || (str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
        {
            //Nothing
        }
        else
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    return str;
}

int main()
{
    std::string str;
    getline(std::cin, str);

    std::cout << capitalizer(str) << std::endl;

    return 0;
}
