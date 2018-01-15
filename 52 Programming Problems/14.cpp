#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string a;
    char b[10000];
    char c;
    int cnt = 0;

    scanf("%[^\n]", b);
    scanf(" %c", &c);

    a = b;

    int len = a.length();

    for(int i = 0; i < len; i++)
    {
        if(a[i] == c)
        {
            cnt++;
        }
    }

    if(cnt > 0)
    {
        printf("Occurrence of '%c' in '%s' = %d\n", c, a.c_str(), cnt);
    }
    else
    {
        printf("'%c' is not present\n", c);
    }

    return 0;
}
