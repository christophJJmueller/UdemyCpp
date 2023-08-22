#include <iostream>
#include <cstdint>

int main()
{
    for (std::uint32_t i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
    }

    std::uint32_t i = 0;

    i = i+1;
    i += 1;
    i++;    //Increment

    i = i+2;
    i += 2;

    i = i-1;
    i -= 1;
    i--;    //Decrement

    return 0;
}
