#include <iostream>
#include <string>

int main()
{
    char c;
    int arr[26] = {};
    bool flag = 1;

    while(std::cin >> c)
    {
        arr[c - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(arr[i]%2 == 1)
        {
            flag = 0;
        }
    }

    if(flag)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
