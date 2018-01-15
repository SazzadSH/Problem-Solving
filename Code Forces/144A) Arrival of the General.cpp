#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, c, v1, v2, v1_c = 0, v2_c = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {

        cin >> a;

        if(i == 0)
        {
            v1 = a;
            v2 = a;
        }
        else
        {
            if(a > v2)
            {
                v2 = a;
                v2_c = i;
            }

            if(a <= v1)
            {
                v1 = a;
                v1_c = i;
            }
        }
    }

    if(v1_c < v2_c)
    {
        c = 1;
    }
    else
    {
        c = 0;
    }

    cout << n - c - v1_c + v2_c - 1 << endl;

    return 0;
}
