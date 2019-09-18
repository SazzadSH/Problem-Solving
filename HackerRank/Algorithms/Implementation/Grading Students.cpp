#include <iostream>

void gradingStudents(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 38)
        {
            if((arr[i] + 1)%5 == 0)
            {
                arr[i]++;
            }
            else if((arr[i] + 2)%5 == 0)
            {
                arr[i] += 2;
            }
        }
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

    gradingStudents(arr, n);

    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
