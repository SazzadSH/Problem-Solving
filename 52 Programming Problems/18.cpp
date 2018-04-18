#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        string str, vowel, con;

        cin.ignore();
        getline(cin, str);

        int len = str.length();

        for(int i = 0; i < len; i++)
        {
            if((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U') || (str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
            {
                vowel += str[i];
            }
            else if(str[i] != ' ')
            {
                con += str[i];
            }
        }

        cout << vowel << endl;
        cout << con << endl;
    }

    return 0;
}
