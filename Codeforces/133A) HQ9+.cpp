#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int k = 0;

    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            k = 1;
            break;
        }
    }

    if(k == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
