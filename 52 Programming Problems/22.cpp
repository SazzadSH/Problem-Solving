#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool prime[100001];

void sieve()
{
    for(int i = 2; i < 100001; i++)
    {
        prime[i] = 1;
    }

    int root = sqrt(100001);

    for(int i = 2; i < root; i++)
    {
        if(prime[i] == 1)
        {
            for(int j = 2; i*j <= 100001; j++)
            {
                prime[i*j] = 0;
            }
        }
    }
}

int main()
{
    sieve();
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int a, b;

        scanf("%d %d", &a, &b);
        int cnt = 0;

        for(int i = a; i <= b; i++)
        {
            if(prime[i])
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
