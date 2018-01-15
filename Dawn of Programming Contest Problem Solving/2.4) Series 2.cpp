#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, i, sum = 0;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }

    cout << sum <<endl;

    return 0;
}
