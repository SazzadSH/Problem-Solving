#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int dimension;

    cin >> dimension;

    int arr[dimension][dimension];

    for(int i = 0; i < dimension; i++)
    {
        for(int j = 0; j < dimension; j++)
        {
            cin >> arr[i][j];
        }
    }

    int leftSum = 0, rightSum = 0, i = 0, j = dimension - 1;

    while(i < dimension && j >= 0)
    {
        leftSum += arr[i][i];
        rightSum += arr[j][i];

        i++;
        j--;
    }

    cout << abs(leftSum - rightSum) << endl;

    return 0;
}
