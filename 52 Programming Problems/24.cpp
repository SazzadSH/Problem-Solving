#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n;

        scanf("%d", &n);

        int ara[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }

        for(int i = 0; i < n; i += 2)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }

    return 0;
}
