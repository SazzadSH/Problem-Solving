#include <iostream>
#include <iomanip>

void plusMinus(int *arr, int n) //Function to calculate and print ratio of positive, negative and zero elements.
{
    int pos = 0, neg = 0, zero = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            zero++;
        }
        else if(arr[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    std::cout << std::setprecision(7) << (double) pos/n << std::endl;
    std::cout << std::setprecision(7) << (double) neg/n << std::endl;
    std::cout << std::setprecision(7) << (double) zero/n << std::endl;
}

int main()
{
    int n;

    std::cin >> n;

    int elementArr[n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> elementArr[i];
    }

    plusMinus(elementArr, n);

    return 0;
}
