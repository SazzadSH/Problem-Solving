#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    int t, len;
    std::string a;

    std::cin >> t;

    while(t--)
    {
        std::cin >> a;

        sort(a.begin(), a.end());
        std::cout << a << std::endl;
    }

    return 0;
}
