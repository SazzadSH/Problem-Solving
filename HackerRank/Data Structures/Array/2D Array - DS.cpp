#include <iostream>


//Finding max hour glass sum
int hourGlassSum(int arr[6][6])
{
    int hgSum, maxSum = -63;

    //Checking 16 hourglasses
    for(int i = 1; i < 5; i++)
    {
        for(int j = 1; j < 5; j++)
        {
            hgSum += arr[i][j];
            hgSum += arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1];
            hgSum += arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];

            if(hgSum > maxSum)
            {
                maxSum = hgSum;
            }

            hgSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    int arr[6][6];

    //Array Input
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    //Maximum Hourglass
    std::cout << hourGlassSum(arr) << std::endl;


    return 0;
}
