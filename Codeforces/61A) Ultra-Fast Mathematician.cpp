#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    int c = a.length();

    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != b[i])
        {
            a[i] = '1';
        }
        else
        {
            a[i] = '0';
        }
    }

    cout << a << endl;

}
