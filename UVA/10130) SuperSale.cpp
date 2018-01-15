#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int price[1001], weight[1001], table[1001][31], n, cap;

int knapsack(int i, int w)
{
    if(i == n)
    {
        return 0;
    }

    if(table[i][w] != -1)
    {
        return table[i][w];
    }

    int profit1, profit2;

    if(w+weight[i] <= cap)
    {
        profit1 = price[i] + knapsack(i+1, w+weight[i]);
    }
    else
    {
        profit1 = 0;
    }

    profit2 = knapsack(i+1, w);

    table[i][w] = max(profit1, profit2);

    return table[i][w];
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            scanf("%d %d", &price[i], &weight[i]);
        }

        int g, total = 0;

        scanf("%d", &g);

        while(g--)
        {
            scanf("%d", &cap);
            memset(table, -1, sizeof(table));

            total += knapsack(0, 0);
        }

        printf("%d\n", total);
    }

    return 0;
}
