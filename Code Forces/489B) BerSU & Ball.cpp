#include <iostream>

using namespace std;

int main()
{
    int n, m, p = 0;

    cin >> n;

    int ara1[n];

    for(int i = 0; i < n; i++)
    {
        cin >> ara1[i];
    }


    cin >> m;

    int ara2[m];

    for(int i = 0; i < m; i++)
    {
        cin >> ara2[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if( ara1[j] > ara1[j+1])
            {
                int temp = ara1[j];
                ara1[j] = ara1[j+1];
                ara1[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m-i-1; j++)
        {
            if( ara2[j] > ara2[j+1])
            {
                int temp = ara2[j];
                ara2[j] = ara2[j+1];
                ara2[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << ara1[i] << " ";
    }

    cout << endl;

    for(int i = (m-1); i >= 0; i--)
    {
        cout << ara2[i] << " ";
    }


    n--;
    m--;

    cout << endl;

    while((n >= 0) && (m >= 0))
    {

        cout << ara2[m] << " ";
        m--;
        /*if(ara1[n] == ara2[m])
        {
            cout << ara1[n] << " " << ara2[m] << endl;
            p++;
            n--;
            m--;
        }
        else if((ara1[n] - ara2[m]) == 1)
        {
            cout << ara1[n] << " " << ara2[m] << endl;
            p++;
            n--;
            m--;
        }
        else if((ara2[m] - ara1[n]) == 1)
        {
            cout << ara1[n] << " " << ara2[m] << endl;
            p++;
            n--;
            m--;
        }
        else
        {
            m--;
        }*/
    }

    cout << p << endl;
    return 0;
}
