#include <iostream>
#include <string>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::string str;
    char c;

    for(int i = 0; i < k; i++)
    {
        std::cin >> c;
        str += c;
    }

    while(std::string::npos != std::to_string(n).find_first_of(str))
    {
        n++;
    }

    std::cout << n << std::endl;

    return 0;
}
