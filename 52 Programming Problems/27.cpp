#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int num;

        scanf("%d", &num);

        int temp = num;
        int rem, res = 0;

        while(num != 0)
        {
            rem = num%10;
            res += (rem*rem*rem);
            num /= 10;
        }

        if(res == temp)
        {
            printf("%d is an armstrong number!\n", temp);
        }
        else
        {
            printf("%d is not an armstrong number!\n", temp);
        }
    }

    return 0;
}
