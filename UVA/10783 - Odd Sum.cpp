#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        int a, b, sum = 0;

        scanf("%d %d", &a, &b);

        for(int j = a; j <= b; j++)
        {
            if(j%2 != 0)
            {
                sum += j;
            }
        }

        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
