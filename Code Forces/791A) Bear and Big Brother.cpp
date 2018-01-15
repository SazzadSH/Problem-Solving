#include <iostream>

using namespace std;

int main()
{
    int n, m, c = 1;

    cin >> n >> m;

    int a, b;
    int ara[m][m];

    for(int i = 0; i < m; i++)
    {
        ara[i][i] = 1;
    }
    int i = m;
    while(i--)
    {
        cin >> a >> b;

        ara[a][b] = 1;
    }

    for(i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(ara[i][j] == 0)
            {
                c = 0;
                break;
            }
        }
    }

    if(c == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
