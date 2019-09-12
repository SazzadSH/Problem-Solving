#include <iostream>
#include <iomanip>

// Function to print Staircase upto n.
void staircase(int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << std::right << std::setw(n-i);
        for(int j = 0; j <= i; j++)
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cin >> n;

    staircase(n);

    return 0;
}
