#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void reversePrint(char str[])
{
    int len = strlen(str);

    for(int i = (len - 1); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf(" ");
}

int main()
{
    int t;
    char str[1002], word[1002];

    scanf("%d", &t);

    while(t--)
    {
        scanf(" %[^\n]", str);

        int len = strlen(str), i = 0, j = 0;

        for(i = 0, j = 0; i < len; i++)
        {
            if(str[i] != ' ')
            {
                word[j] = str[i];
                j++;
            }
            else if(j > 0)
            {
                word[j] = '\0';
                reversePrint(word);
                j = 0;
            }
        }

        if(j > 0)
        {
            word[j] = '\0';
            reversePrint(word);
            printf("\n");
        }
    }

    return 0;
}
