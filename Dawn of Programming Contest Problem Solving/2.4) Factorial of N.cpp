#include <iostream>

using namespace std;

int main()
{
    int n, r, fact_of_n = 1, fact_of_r = 1, fact_of_n_r = 1;

    cin >> n >> r;

    for(int i = 1; i <= n; i++)
    {
        fact_of_n *= i;
    }

    for(int i = 1; i <= r; i++)
    {
        fact_of_r *= i;
    }

    for(int i = 1; i <= (n - r); i++)
    {
        fact_of_n_r *= i;
    }

    cout << fact_of_n / (fact_of_r * fact_of_n_r) << endl;

    return 0;
}
