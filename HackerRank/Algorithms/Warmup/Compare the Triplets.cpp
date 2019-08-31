#include <iostream>

using namespace std;

int main()
{
    int points[2] = {0, 0};
    int alice[3], bob[3];

    for(int i = 0; i < 3; i ++)
    {
        cin >> alice[i];
    }

    for(int i = 0; i < 3; i ++)
    {
        cin >> bob[i];
    }

    for(int i = 0; i < 3; i++)
    {
        if(alice[i] > bob[i])
        {
            points[0]++;
        }
        else if(alice[i] < bob[i])
        {
            points[1]++;
        }
    }

    cout << points[0] << " " << points[1] << endl;

    return 0;
}
