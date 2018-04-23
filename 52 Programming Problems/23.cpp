#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str;

    cin >> str;

    int len = str.length();

    for(int i = 0; i < len; i++)
    {
        if((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            int c = str[i] - 'A';
            printf("%d", ++c);
        }
        else if((str[i] >= 'a') && (str[i] <= 'z'))
        {
            int c = str[i] - 'a';
            printf("%d", ++c);
        }
    }
    printf("\n");

    return 0;
}
