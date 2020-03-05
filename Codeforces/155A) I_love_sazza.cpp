#include <iostream>

using namespace std;

int main()
{
    int n, minimum_value, maximum_value;

    int counter = 0;

    cin>> n;

    int a[n];

    for(int i=0; i < n ;i++)
    {
        cin>> a[i];

        if(i == 0)
        {
            minimum_value = a[i];
            maximum_value = a[i];
        }

        if(a[i] < minimum_value)
        {
            minimum_value = a[i];
            counter++;
        }

        if(a[i] > maximum_value)
        {
            maximum_value = a[i];
            counter++;
        }

    }

    cout << counter << endl;

    return 0;
}
