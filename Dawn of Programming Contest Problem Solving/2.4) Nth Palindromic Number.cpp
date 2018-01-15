#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, i = 0;

    scanf("%d", &n);

    while(1)
    {
        int rev = 0, temp = i;

        while(temp != 0)
        {
            rev = rev*10;
            rev = rev + temp%10;
            temp = temp/10;
        }

        if(rev == i)
        {
            n--;
        }

        if(n == 0)
        {
            break;
        }

        i++;
    }

    cout << i << endl;

    return 0;
}
