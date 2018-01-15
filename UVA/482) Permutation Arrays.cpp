/*#include <iostream>
#include <cstring>*/

#include <stdio.h>

int main()
{
    int p[1000];
    char ara[1000][1000];

    int n, i = 0, t, c;

    bool s = 0;

    scanf("%d\n", &n);

    while (n--)
    {
        if (s)
        {
            printf("\n");
        }

        s = 1;
        c = 0;

        while (1)
        {
            scanf("%d", &t);

            p[t-1] = c++;

            if (getchar() == '\n')
            {
                break;
            }
        }

        while(i < c)
        {
            scanf("%s", ara[i]);

            i++;
        }

        i = 0;

        while(i < c)
        {
            printf("%s\n", ara[p[i]]);


            i++;
        }
    }

    return 0;
}
