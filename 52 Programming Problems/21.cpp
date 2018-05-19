#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        string str;

        cin >> str;

        int len = str.length();

        for(int i = (len - 1); i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}
