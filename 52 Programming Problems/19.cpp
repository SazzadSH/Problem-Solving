#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        string str;
        int count = 0;

        cin.ignore();
        getline(cin, str);

        int len = str.length();
        bool flag = 0;

        for(int i = 0; i < len; i++)
        {
            if(str[i] != ' ')
            {
                flag = 0;
            }
            else if(flag == 0)
            {
                count++;
                flag = 1;
            }

            if(i == (len - 1))
            {
                if(str[i-1] != ' ')
                {
                    count++;
                    flag = 1;
                }
            }
        }

        cout << "Count = " << count << endl;
    }

    return 0;
}
