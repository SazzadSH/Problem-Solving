#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, total = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            a++;

            total += a;
        }
    }

    cout << total << endl;

    return 0;
}
