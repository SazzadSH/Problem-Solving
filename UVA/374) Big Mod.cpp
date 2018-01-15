#include <iostream>

using namespace std;

long long int mod(long long int x, long long int y, long long int z)
{
    long long int p1, p2, r;

    if(y == 0)
    {
        return 1;
    }

    if(y % 2 == 1)
    {
        p1 = x%z;
        p2 = mod(x, y-1, z);
        r = (p1*p2)%z;

        return r;
    }

    if(y % 2 == 0)
    {
        r = mod(x, y/2, z);

        return (r*r)%z;
    }
}

int main()
{
    long long int b, p, m;

    while(cin >> b >> p >> m)
    {
        cout << mod(b, p, m) << endl;
    }


    return 0;
}
