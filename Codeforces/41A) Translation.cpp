#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    reverse(a.begin(), b.end());

    if(a == b)
    {

    }
    else
    {
        cout <<"YES" << endl;
    }


    return 0;
}
