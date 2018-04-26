#include <iostream>
#include <cstdio>

using namespace std;

bool sorted(int ara[], int n)
{
    int previous = ara[0], current;
    bool flag = 0;

    for(int i = 1; i < n; i++)
    {
        current = ara[i];

        if(current >= previous)
        {
            previous = current;
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

bool rev_sorted(int ara[], int n)
{
    int previous = ara[0], current;
    bool flag = 0;

    for(int i = 1; i < n; i++)
    {
        current = ara[i];
        if(current <= previous)
        {
            flag = 1;
            previous = current;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int n;

    scanf("%d", &n);

    int ara[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    if(sorted(ara, n))
    {
        printf("YES\n");
    }
    else
    {
        if(rev_sorted(ara, n))
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
