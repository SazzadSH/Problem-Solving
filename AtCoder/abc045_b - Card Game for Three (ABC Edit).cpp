#include <iostream>
#include <string>

int main()
{
    std::string a, b, c;
    std::cin >> a >> b >> c;
    int i = 0, j = 0, k = 0;
    char ch;

    int aLen = a.length(), bLen = b.length(), cLen = c.length();

    ch = a[i];
    i++;

    while(1)
    {
        if(ch == 'a')
        {
            if(i == aLen)
            {
                std::cout << "A" << std::endl;
                break;
            }

            ch = a[i];
            i++;
        }
        else if(ch == 'b')
        {
            if(j == bLen)
            {
                std::cout << "B" << std::endl;
                break;
            }

            ch = b[j];
            j++;
        }
        else if(ch == 'c')
        {
            if(k == aLen)
            {
                std::cout << "C" << std::endl;
                break;
            }

            ch = c[k];
            k++;
        }
    }

    return 0;
}
