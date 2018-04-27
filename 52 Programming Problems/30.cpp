#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        long long int num;

        scanf("%llu", &num);

        long long int sum = 1, root = sqrt(num);

        for(int i = 2; i <= root; i++)
        {
            if(num%i == 0)
            {
                sum += (i + (num/i));
            }
        }

        if(sum == num)
        {
            printf("Yes, %d is a perfect number\n", num);
        }
        else
        {
            printf("No, %d is not a perfect number\n", num);
        }
    }
    return 0;
}
