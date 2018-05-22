#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }

    return a;
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int x, y;

        scanf("%d %d", &x, &y);
        int lcm = (x*y)/gcd(x, y);

        printf("LCM = %d\n", lcm);
    }

    return 0;
}
