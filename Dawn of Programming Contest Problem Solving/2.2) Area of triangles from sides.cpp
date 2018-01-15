#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a, b, c, s, x;

    cin >> a >> b >> c;

    s = (a+b+c)/2;
    x = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << x;

    return 0;
}
