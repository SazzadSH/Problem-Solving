#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, fact = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}
