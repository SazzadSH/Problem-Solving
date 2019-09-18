#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int n, l;
    std::cin >> n >> l;

    std::string strArr[n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> strArr[i];
    }

    std::sort(strArr, strArr + n);

    for(int i = 0; i < n; i++)
    {
        std::cout << strArr[i];
    }

    std::cout << std::endl;

    return 0;
}
