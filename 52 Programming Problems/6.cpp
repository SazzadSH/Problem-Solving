#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n, msd, lsd;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        lsd = n%10;
        msd = (n - (n%10000))/10000;

        printf("Sum = %d\n", lsd + msd);
    }

    return 0;
}
