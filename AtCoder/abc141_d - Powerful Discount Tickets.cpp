#include <iostream>
#include <queue>

int main()
{
    int n, m, price;
    long long int minCost = 0;

    std::cin >> n >> m;

    std::priority_queue <int> pq;

    for(int i = 0; i < n; i++)
    {
        std::cin >> price;
        pq.push(price);
    }

    for(int i = 0; i < m; i++)
    {
        pq.push(pq.top()/2);
        pq.pop();
    }

    while(!pq.empty())
    {
        minCost += pq.top();
        pq.pop();
    }

    std::cout << minCost << std::endl;

    return 0;
}
