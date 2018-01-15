#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, i, x = 0;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        x += pow(i, i);
    }

    cout << x << endl;

    return 0;
}
