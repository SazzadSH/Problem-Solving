#include <iostream>

using namespace std;

int main()
{
    int n, t, a[100000];

    cin >> n >> t;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int j = 0, time = 0;

    while (j < n && time + a[j] <= t)
    {
        time += a[j++];
    }

    int m = j;

    for (int i = 0; i < n; ++i)
    {
        time -= a[i];

        while (j < n && time + a[j] <= t)
        {
            time += a[j++];
        }

        if (j - i - 1 > m)
        {
            m = j - i - 1;
        }
    }

    cout << m << endl;

    return 0;
}
