#include<iostream>

using namespace std;

class abc
{
protected:
    int a = 10;
};

int main()
{
    abc x;
    cout << x.a;
    return 0;
}
