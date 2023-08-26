#include <iostream>
#include <cstdint>

//Compute the sum for every collumn

int main()
{
    constexpr static auto num_rows = std::uint32_t{3};
    constexpr static auto num_cols = std::uint32_t{2};

    std::int32_t my_matrix[num_rows][num_cols] = {{1,2}, {3,4}, {5,6}};

    for (std::uint32_t i = 0; i < num_cols; i++)
    {
        std::uint32_t col_sum = 0;
        for (std::uint32_t j = 0; j < num_rows; j++)
        {
            col_sum += my_matrix[j][i];
        }
        std::cout << "The sum for collumn " << i+1 << " is: " << col_sum << std::endl;

    }


    return 0;
}
