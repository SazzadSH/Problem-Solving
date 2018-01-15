#include<iostream>

using namespace std;

class Base
{
            int x;
public:

    Base(int i)
    {
        x = i;
        cout << "Base Parameterized Constructor " << x <<endl;
    }
};

class Derived : public Base
{
protected:
    int y;
    public:
    Derived(int j) : Base(j)
    {
        y = j;
        cout << "Derived Parameterized Constructor " << y <<endl;
    }
};

int main()
{
    Derived d(10) ;
}
