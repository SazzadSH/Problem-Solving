#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double ax, ay, bx, by, cx, cy, area;

    cin >> ax >> ay >> bx >> by >> cx >> cy;

    area = ax*(by - cy) + bx*(cy - ay) + cx*(ay - by);

    cout << area;

    return 0;
}
