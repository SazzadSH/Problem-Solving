#include<iostream>

using namespace std;

int main()
{
    int grid[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(grid[i][j]%2 == 1)
            {
                grid[i][j] = 0;
                grid[i-1][j] = 0;
                grid[i+1][j] = 0;
                grid[i][j-1] = 0;
                grid[i][j+1] = 0;
            }
            else
            {
                grid[i][j] = 1;
                grid[i-1][j] = 1;
                grid[i+1][j] = 1;
                grid[i][j-1] = 1;
                grid[i][j+1] = 1;
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << grid[i][j];
        }

        cout << endl;
    }


    return 0;

}
