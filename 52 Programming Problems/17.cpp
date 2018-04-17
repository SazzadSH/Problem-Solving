#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    string str;

    cin >> t;

    while(t--)
    {
        int vcount = 0;
        cin.ignore();
        getline(cin, str);

        int len = str.length();

        for(int i = 0; i < len; i++)
        {
            if((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U') || (str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
            {
                vcount++;
            }
        }

        cout << "Number of vowels = " << vcount << endl;
    }

    return 0;
}
