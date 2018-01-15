#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t;

    string num;

    cin >> t;

    while(t--)
    {
        cin >> num;

        if(num[num.length() - 1]%2 == 0)
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
