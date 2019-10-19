#include <iostream>

int main()
{
    int i = 1;
    bool flag = 1;
    while(1)
    {
        if(i == 10)
        {
            flag = 0;
        }
        else if(i == 0)
        {
            break;
        }

        std::cout << i << " ";

        if(flag == 1)
        {
            i++;
        }
        else
        {
            i--;
        }
    }
}
