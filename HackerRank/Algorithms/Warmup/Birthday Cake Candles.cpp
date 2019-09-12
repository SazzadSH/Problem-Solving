#include <iostream>

//Function to calculate tallest candles
int birthdayCakeCandles(int *arr, int n)
{
    int tallestCandles = 0, sizeOfTallest = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > sizeOfTallest)
        {
            tallestCandles = 1;
            sizeOfTallest = arr[i];
        }
        else if(arr[i] == sizeOfTallest)
        {
            tallestCandles++;
        }
    }

    return tallestCandles;
}

int main()
{
    int n;
    std::cin >> n;

    int candles[n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> candles[i];
    }

    std::cout << birthdayCakeCandles(candles, n) << std::endl;

    return 0;
}
