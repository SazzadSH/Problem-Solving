#include <iostream>

using namespace std;

int main()
{
    int ara[50];

    int n;

    ara[0] = 1;
    ara[1] = 2;

    for(int i = 2; i < 50; i++)
    {
        ara[i]= ara[i-1] + ara[i-2];
    }

    while (cin>> n)
    {
        if(n == 0)
        {
               break;
        }
        else
        {
            cout << ara[n - 1] <<endl;
        }
    }

    return 0;
}
