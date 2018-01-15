#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t != 0)
    {
        int ara[t];

        for(int i = 0; i < t; i++)
        {
            scanf("%d", &ara[i]);
        }

        sort(ara, ara + t);

        for(int i = 0; i < t; i++)
        {
            printf("%d", ara[i]);

            if(i != t - 1)
            {
                printf(" ");
            }
        }

        printf("\n");

        scanf("%d", &t);
    }

    return 0;
}
