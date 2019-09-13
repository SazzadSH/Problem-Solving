// Write a function to return a reversed order integer
// of given integer.

#include <iostream>

// Function to return the reversed integer.
int reverseInt(int num)
{
    int revInt = 0;

    if(num >= 0)
    {
        while(num > 0)
        {
            revInt *= 10;
            revInt += num%10;

            num /= 10;
        }
    }
    else
    {
        num *= -1;
        while(num > 0)
        {
            revInt *= 10;
            revInt += num%10;

            num /= 10;
        }

        revInt *= -1;
    }

    return revInt;
}

int main()
{
    int num;
    std::cin >> num;

    std::cout << reverseInt(num) << std::endl;

    return 0;
}
