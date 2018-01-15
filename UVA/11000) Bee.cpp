#include <iostream>

using namespace std;

int main()
{
    long long int n, i, f, m, t, mb, fb;

    while (1)
    {
        cin >> n;

        if (n==-1)
        {
            break;
        }

        f = 1;
        fb = 0;
        t = 1;
        m = 0;

        for (i = 1; i <= n; i++)
        {
            m = t;
            mb = f;
            f = f + fb;
            t = t + f;
            fb = mb;
        }

        cout << m << " " << t << endl;
    }

    return 0;
}
