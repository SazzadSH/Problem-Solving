#include <iostream>

using namespace std;

int main()
{
    int t, n, m, k;

    cin >> t;

    while(t--)
    {
        cin >> n >> m >> k;

        if((n-m) >= 0)
        {
            while((m != n) && (k > 0))
            {
                m++;
                k--;
            }

            while(k >= 2)
            {
                m++;
                n++;

                k -= 2;
            }

            cout << (n - m) << endl;

        }
        else if((m - n) > 0)
        {
            while((n != m) && (k > 0))
            {
                n++;
                k--;
            }

            while(k >= 2)
            {
                m++;
                n++;

                k -= 2;
            }

            cout << (m - n) << endl;
        }
    }
}
