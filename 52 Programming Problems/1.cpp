#include<iostream>

using namespace std;

int main()
{
    int n, num;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;

        if(num%2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}
