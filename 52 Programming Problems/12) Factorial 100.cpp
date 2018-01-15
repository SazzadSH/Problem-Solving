#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n, fact;

        scanf("%d", &n);

        int c = 0;

        for(int i = 1; i <= n; i++)
        {
            if(i%5 == 0)
            {
                c++;
                fact = i/5;
                while(fact%5 == 0)
                {
                    c++;
                    fact /= 5;
                }
            }
        }

        printf("%d\n", c);
    }

    return 0;
}
