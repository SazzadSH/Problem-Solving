#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        double x;
        int cnt = 0;
        scanf("%lf", &x);

        while(x > 1.0)
        {
            x /= 2;
            cnt++;
        }

        printf("%d days\n", cnt);
    }

    return 0;
}
