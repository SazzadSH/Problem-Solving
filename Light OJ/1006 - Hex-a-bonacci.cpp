#include <iostream>
#include <cstdio>

using namespace std;

long long int ara[10001], n;

long long int fn(long long int x)
{
    if(ara[x] != -1)
    {
        return ara[x];
    }
    else
    {
        ara[x] = (fn(x-1) + fn(x-2) + fn(x-3) + fn(x-4) + fn(x-5) + fn(x-6))%10000007;
        return ara[x];
    }
}

int main()
{
    int t, c = 0;

    scanf("%d", &t);

    while(t--)
    {
        ++c;

        for(int i = 0; i < 6; i++)
        {
            scanf("%lld", &ara[i]);
        }

        scanf("%d", &n);

        for(int i = 6; i < 10001; i++)
        {
            ara[i] = -1;
        }

        long long int ans = fn(n)%10000007;

        printf("Case %d: %lld\n", c, ans);
    }
}
