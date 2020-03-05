#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    if (a % 2 == 0)
    {

        cout << "2 1";

        for (int i = 4; i <= a; i += 2)
        {
            cout << " " << i - 1 << " " << i;
        }

        cout << endl;
    }
    else
    {

        cout << -1 << endl;

    }

    return 0;
}
