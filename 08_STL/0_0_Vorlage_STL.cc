#include <iostream>
#include <cstdint>
#include <vector>
#include <random>

//

//globale konstante Variable
constexpr static auto NUM_ELEMENTS = 1'000'000U;

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);

    return 0;
}
