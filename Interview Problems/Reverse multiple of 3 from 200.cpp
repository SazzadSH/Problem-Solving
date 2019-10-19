#include <iostream>

int main()
{
    for(int i = 200; i > 0; i--)
    {
        if(i%3 == 0)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
