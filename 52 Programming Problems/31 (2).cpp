#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    int ara[] = {6, 28, 496, 8128, 33550336};

    while(t--)
    {
        long long int num;

        scanf("%llu", &num);

        for(int i = 0; i < 5; i++)
        {
            if(ara[i] <= num)
            {
                printf("%d\n", ara[i]);
            }
            else
            {
                break;
            }
        }
    }

    return 0;
}
