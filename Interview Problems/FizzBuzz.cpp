/* Problem: Write a program that prints the numbers from
1 to 100. But for multiples of three, print 'Fizz' and
for multiples of five, print 'Buzz' instead of the
number. If the number is multiple of both three and five,
print 'FizzBuzz'.
*/

#include <iostream>

void FizzBuzz() // Function to determine what to print
{
    bool flag = 0;

    for(int i = 1; i <= 100; i++)
    {
        flag = 0;

        if(i%3 == 0)
        {
            std::cout << "Fizz";
            flag = 1;
        }

        if(i%5 == 0)
        {
            std::cout << "Buzz";
            flag = 1;
        }

        if(flag == 0)
        {
            std::cout << i;
        }

        std::cout << std::endl;

    }
}

int main()
{
    FizzBuzz();
}
