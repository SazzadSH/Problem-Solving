#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    char s[1002], word[1002];

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf(" %[^\n]", s);
        printf("%s", s);
    }

    return 0;
}
