#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int coin[] = {50, 25, 10, 5, 1}, make, mem_table[6][10001];

int change(int i, int amount)
{
    if(i >= 5)
    {
        if(amount == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    if(mem_table[i][amount] != -1)
    {
        return mem_table[i][amount];
    }

    int ret1 = 0, ret2 = 0;

    if(amount - coin[i] >= 0)
    {
        ret1 = change(i, amount-coin[i]);
    }

    ret2 = change(i+1, amount);

    return mem_table[i][amount] = ret1 + ret2;
}

int main()
{
    memset(mem_table, -1, sizeof(mem_table));

    while(scanf("%d", &make) != EOF)
    {
        int res = change(0, make);

        printf("%d\n", res);
    }

    return 0;
}
