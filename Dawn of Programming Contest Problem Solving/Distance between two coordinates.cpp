#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x1, x2, y1, y2;

    cin >> x1 >> x2 >> y1 >> y2;
    cout << sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));

    return 0;
}
