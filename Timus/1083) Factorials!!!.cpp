#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int n, len, i;
    long long result = 1;
    string s;

    scanf("%d", &n);

    cin >> s;

    len = s.length();

    for(i = n; i > 0; i -= len)
    {
        result = result * i;
    }

    printf("%lld\n", result);

    return 0;
}

