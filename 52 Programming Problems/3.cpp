#include <iostream>

using namespace std;

int main()
{
    for(int i = 1000; i > 0; i--)
    {
        if(i < 1000 && (i%5) == 0)
        {
            cout << endl;
        }

        cout << i << "\t";
    }

    return 0;
}
