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

        for(long long int i = 6; i <= num; i++)
        {
            long long int root = sqrt(i), sum = 1;

            for(long long int j = 2; j <= root; j++)
            {
                if(i%j == 0)
                {
                    sum += (j + (i/j));
                }
            }

            if(sum == i)
            {
                printf("%llu\n", i);
            }
        }
    }

    return 0;
}
