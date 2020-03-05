#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int ara[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ara[i];
    }

    int l = 0, r = (n-1), sereja = 0, dima = 0, c = 1;

    while(l < r+1)
    {
        if (ara[l] > ara[r])
        {
            if(c%2 == 1)
            {
                sereja += ara[l];
            }
            else
            {
                dima += ara[l];
            }

            l++;
        }
        else
        {
            if (c%2 == 1)
            {
                sereja += ara[r];
            }
            else
            {
                dima += ara[r];
            }

            r--;
        }

        c++;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
