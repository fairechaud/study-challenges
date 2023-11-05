#include<iostream>

int main()
{
    std::string cars[][3] = {{"mustang","silverado","ferrari"},
                            {"galant","outback","F-150"},
                            {"navara","C63","mach e"}};
    std::cout << cars[0][1] << std::endl;

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i=0; i < rows; i++)
    {
        for (int j=0; j < columns; j++)
        {
            std::cout << cars[i][j] << ", ";
        }
    }
    return 0;
}