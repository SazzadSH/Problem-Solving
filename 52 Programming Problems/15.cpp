#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int count[26];
    string a;
    char b[11];

    memset(count, 0, sizeof(count));

    scanf("%[^\n]", b);

    a = b;

    int len = a.length();

    for(int i = 0; i < len; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            count[a[i]-'a']++;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c = %d\n", 'a'+i, count[i]);
        }
    }

    return 0;
}
