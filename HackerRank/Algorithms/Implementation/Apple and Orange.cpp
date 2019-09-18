#include <iostream>

//Function to count apples and oranges within the range of the house
void countApplesAndOranges(int houseStartRange, int houseEndRange, int appleTree, int orangeTree, int apples, int oranges, int *applesDist, int *orangesDist)
{
    int appleCount = 0, orangeCount = 0;
    for(int i = 0; i < apples; i++)
    {
        if((applesDist[i] + appleTree) >= houseStartRange && (applesDist[i] + appleTree) <= houseEndRange)
        {
            appleCount++;
        }
    }

    for(int i = 0; i < oranges; i++)
    {
        if((orangeTree + orangesDist[i]) >= houseStartRange && (orangeTree + orangesDist[i]) <= houseEndRange)
        {
            orangeCount++;
        }
    }

    std::cout << appleCount << std::endl << orangeCount << std::endl;
}

int main()
{
    int houseStartRange, houseEndRange, appleTree, orangeTree, apples, oranges;
    std::cin >> houseStartRange >> houseEndRange >> appleTree >> orangeTree >> apples >> oranges;

    int applesDist[apples], orangesDist[oranges];

    for(int i = 0; i < apples; i++)
    {
        std::cin >> applesDist[i];
    }

    for(int i = 0; i < oranges; i++)
    {
        std::cin >> orangesDist[i];
    }

    countApplesAndOranges(houseStartRange, houseEndRange, appleTree, orangeTree, apples, oranges, applesDist, orangesDist);

    return 0;
}
