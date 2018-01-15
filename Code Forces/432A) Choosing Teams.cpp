#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int a, b, c = 0, d;

	cin >> a >> b;

	for(int i = 0; i < a; i++)
    {
		cin >> d;
		if(5 -  d >= b)
		{
			c++;
		}
	}

	cout << c/3 << endl;

}

