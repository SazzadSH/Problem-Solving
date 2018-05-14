#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string code;

    cin >> code;

    int strLen = code.length();

    for(int i = 0; i < strLen; i++)
    {
        if(code[i] == '.')
        {
            printf("0");
        }
        else if(code[i] == '-')
        {
            if(code[i+1] == '.')
            {
                printf("1");
                i++;
            }
            else
            {
                printf("2");
                i++;
            }
        }
    }

    printf("\n");

    return 0;
}
