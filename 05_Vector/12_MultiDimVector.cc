#include <iostream>
#include <cstdint>
#include <vector>



int main()
{
    //2D Array = Matrix
    //Number of rows = 3, number of collumns = 2

    std::int32_t my_matrix2[3][2] = {{1,2}, {3,4}, {5,6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << my_matrix2[i][j] << std::endl;
        }

    }

    //auto my_vector = std::vector<std::vector<std::int32_t>>{{1,2}, {3,4}, {5,6}};

    //leere Initialisierung
    auto my_vector = std::vector<std::vector<std::int32_t>>(3, std::vector<std::int32_t>(2,0));

    for (auto &outer_value : my_vector)
    {
        for (auto &inner_value1 : outer_value)
            {
                std::cout << inner_value1 << std::endl;
            }
    }

    return 0;
}
