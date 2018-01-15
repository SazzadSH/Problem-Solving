#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double a, b, c, x, y, z;

    cin >> a >> b >> c;

    x = acos((pow(a, 2)-pow(b, 2)-pow(c, 2))/(-2*b*c));
    y = acos((pow(b, 2)-pow(a, 2)-pow(c, 2))/(-2*a*c));
    z = acos((pow(c, 2)-pow(a, 2)-pow(b, 2))/(-2*a*b));

    cout << x*(180/acos(-1)) <<endl << y*(180/acos(-1)) <<endl << z*(180/acos(-1));

    return 0;
}
