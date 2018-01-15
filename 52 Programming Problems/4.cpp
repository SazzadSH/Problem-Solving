#include <iostream>

using namespace std;

int main()
{
    int t, num;

    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        cin >> num;

        cout << "Case " << i << ":";

        for(int j = 1; j <= num; j++)
        {
            if(num%j == 0)
            {
                cout << " " << j;
            }
        }

        cout << endl;
    }

    return 0;
}
