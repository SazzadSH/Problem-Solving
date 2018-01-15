#include<iostream>

using namespace std;

int main()
{
    int n, m, prime_check;

    cin >> n >> m;

    n++;

    while(n <= 50)
    {
        for(int i = 2; i < n; i++)
        {
            if(n%i == 0)
            {
                prime_check = 0;
                break;
            }
            else
            {
                prime_check = 1;
            }
        }

        if(prime_check == 1)
        {
            break;
        }

        n++;
    }

    if(prime_check == 1 && n == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
