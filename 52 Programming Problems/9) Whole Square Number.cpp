#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n;

        scanf("%d", &n);

        double s = sqrt(n);

        int c = s;

        if((s - c) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
