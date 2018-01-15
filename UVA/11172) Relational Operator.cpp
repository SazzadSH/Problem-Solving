#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str;

    while(getline(cin, str))
    {
        printf("%s\n", str.c_str());
    }

    return 0;
}
