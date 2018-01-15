#include<iostream>

using namespace std;

int main()
{
    int i, n;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
        for(int k = 1; k <= i; k++)
        {
            cout << " ";
        }
    }
}
