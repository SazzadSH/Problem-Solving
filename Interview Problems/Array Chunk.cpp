//Given an Array and chunk size, divide the array into
// many subarrays where each subarray is of length size.
// Example: chunk([1, 2, 3, 4, 5, 6, 7], 3) = [1, 2, 3,], [4, 5, 6], [7]

#include <iostream>
#include <vector>

// Function to generate array chunk of chunk size
int* chunking(int *arr, int size)
{
    int n = sizeof(arr)/sizeof(arr[0]);

    if(size > n || n == 0)
    {
        return arr;
    }
    else
    {
        std::vector <int> vec[(n/size) + 1];

        int k = 0;
        for(int i = 0; i < (n/size); i++)
        {
            for(int j = 0; j < size; j++)
            {
                vec[i].push_back(arr[k]);
                k++;
            }
        }

        for(int i = k; i < n; i++)
        {
            vec[n/size].push_back(arr[i]);
        }

        return vec;
    }
}

int main()
{
    int n;
    std::cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int chunk;
    std::cin >> chunk;



    return 0;
}
