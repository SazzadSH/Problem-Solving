#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int testCases;

    scanf("%d", &testCases);

    while(testCases--)
    {
        int m = 0, a = 0, r = 0, g = 0, i = 0, t = 0;
        int pizzaCount = 0;

        string str;

        cin >> str;

        int strLen = str.length();

        for(int x = 0; x < strLen; x++)
        {
            if(str[x] == 'M')
            {
                m++;
            }
            else if(str[x] == 'A')
            {
                a++;
            }
            else if(str[x] == 'R')
            {
                r++;
            }
            else if(str[x] == 'G')
            {
                g++;
            }
            else if(str[x] == 'I')
            {
                i++;
            }
            else if(str[x] == 'T')
            {
                t++;
            }
        }

        while((m >= 1) && (a >= 3) && (r >= 2) && (g >= 1) && (i >= 1) && (t >= 1))
        {
            pizzaCount++;
            m--;
            a -= 3;
            r -= 2;
            g--;
            i--;
            t--;
        }

        printf("%d\n", pizzaCount);
    }

    return 0;
}
