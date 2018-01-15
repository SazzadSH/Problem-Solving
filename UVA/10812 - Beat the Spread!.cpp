#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        if((x >= y) && ((x + y)%2 == 0))
        {
            printf("%d %d\n", (x+y)/2, (x - (x+y)/2));
        }
        else
        {
            printf("impossible\n");
        }
    }

    return 0;
}
