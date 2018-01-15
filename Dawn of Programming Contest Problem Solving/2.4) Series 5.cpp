#include <iostream>

using namespace std;

int main()
{
    int n, total = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 0)
        {
            total -= i;
        }
        else
        {
            total += i;
        }
    }

    cout << total << endl;

    return 0;
}
