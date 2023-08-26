#include <cstdint>
#include <iostream>
#include <array>

template <std::size_t N>
void print_array(const std::array<std::int32_t, N> arr)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
}

int main()
{
    constexpr std::size_t arr_len = 4U;
    const std::array<std::int32_t, arr_len> arr ={1,2,3,4};
    print_array(arr);

    constexpr std::size_t arr_len2 = 6U;
    const std::array<std::int32_t, arr_len2> arr2 ={1,2,3,4,5,6};
    print_array(arr2);

    return 0;
}
