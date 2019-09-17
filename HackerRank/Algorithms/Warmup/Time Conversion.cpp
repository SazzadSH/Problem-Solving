#include <iostream>
#include <string>

std::string timeConversion(std::string str)
{
    std::string str2 = "00:00:00";
    int timeConv;

    if(str[8] == 'A')
    {
        if(str[0] == '1' && str[1] == '2')
        {
            str[0] = '0';
            str[1] = '0';
        }

        for(int i = 0; i < 8; i++)
        {
            str2[i] = str[i];
        }
    }
    else
    {
        if(str[0] != '1' || str[1] != '2')
        {
            timeConv = (str[0] - '0')*10;
            timeConv += (str[1] - '0') + 12;

            str[1] = (timeConv%10) + '0';
            timeConv /= 10;
            str[0] = (timeConv%10) + '0';
        }
    }

    for(int i = 0; i < 8; i++)
    {
        str2[i] = str[i];
    }

    return str2;
}

int main()
{
    std::string time;
    getline(std::cin, time);

    std::cout << timeConversion(time) << std::endl;

    return 0;
}
