#include<iostream>

using namespace std;

int main()
{
    int ara[5] = {1, 2, 3, 4, 5};
    int esum = 0, ec = 0, osum = 0, oc = 0, i;

    for(i = 0; i < 5; i++)
    {
        if(ara[i]%2 == 0)
        {
            esum += ara[i];
            ec++;
        }
        else
        {
            osum += ara[i];
            oc++;
        }
    }

    cout << esum/ec <<endl;
    cout << osum/oc <<endl;

    return 0;
}
