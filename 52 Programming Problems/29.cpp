#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char ch;
    int t;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", &ch);

        if((ch >= 'A') && (ch <= 'Z'))
        {
            printf("Uppercase Character\n");
        }
        else if((ch >= 'a') && (ch <= 'z'))
        {
            printf("Lowercase Character\n");
        }
        else if((ch >= '0') && (ch <= '9'))
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }

    return 0;
}
