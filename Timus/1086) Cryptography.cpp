#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isPrime(int x)
{
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x%i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int k, n;

    scanf("%d", &k);

    while(k--)
    {
        scanf("%d", &n);

        int i = 2;

        while(1)
        {
            if(isPrime(i) == true)
            {
                n--;
            }

            if(n == 0)
            {
                break;
            }

            i++;
        }

        if(i > 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
