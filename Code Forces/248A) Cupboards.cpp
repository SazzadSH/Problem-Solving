#include<iostream>

using namespace std;

int main()
{
    int n, right, left, rcount = 0, lcount = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> left >> right;

        if(left == 1)
        {
            lcount++;
        }
        if(right == 1)
        {
            rcount++;
        }

    }

    if(lcount > (n - lcount))
    {
        lcount = (n - lcount);
    }
    if(rcount > (n - rcount))
    {
        rcount = (n - rcount);
    }

    cout << lcount + rcount << endl;



    return 0;
}
