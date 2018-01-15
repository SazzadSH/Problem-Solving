#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t, l;

    scanf("%d", &t);

    while(t--)
    {
        int c = 0;

        scanf("%d", &l);

        int ara[l];

        for(int i = 0; i < l; i++)
        {
           scanf("%d", &ara[i]);
        }

        for(int i = 0; i < l - 1; i++)
        {
            for(int j = i + 1; j < l; j++)
            {
                if(ara[i] > ara[j])
                {
                    int s = ara[i];
                    ara[i] = ara[j];
                    ara[j] = s;
                    c++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", c);
    }

    return 0;
}
