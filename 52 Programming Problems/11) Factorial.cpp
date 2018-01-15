#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);

    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n;
        unsigned long int fact = 1;

        scanf("%d", &n);

        for(int i = 2; i <= n; i++)
        {
            fact = fact*i;
        }

        printf("%lu\n", fact);
    }

    return 0;
}

