// Write a program to generate and print nth Fibonacci sequence
// 1 1 2 3 5 8 13....

#include <iostream>

int fibonacci(int n) //Function to find nth Fibonacci
{
    if(n < 2)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    std::cin >> n; // Input N

    std::cout << fibonacci(n);

    return 0;
}

