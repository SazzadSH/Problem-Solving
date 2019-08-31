#include <iostream>
#include <algorithm>

using namespace std;

/*Function to calculate minimum and maximum value
summing 4 out of 5 values. */

void miniMaxSum(long long int *arr)
{
    long long int minSum, maxSum; //variables to store min and max sum value

    sort(arr, arr + 5);

    minSum = arr[0] + arr[1] + arr[2] + arr[3];
    maxSum = arr[1] + arr[2] + arr[3] + arr[4];

    cout << minSum << " " << maxSum << endl;
}

int main()
{
    long long int arr[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    miniMaxSum(arr);
}
