#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;

    double p, total;

    for(int i = 0; i < n; i++)
    {
        cin >> p;

        total += p;
    }

    cout << fixed << setprecision(12) << total/n << endl;

    return 0;
}
