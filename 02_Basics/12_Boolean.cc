#include <iostream>
#include <cstdint>

// true = 1
// false = 0

// !true = false
// !false = true

int main()
{
    std::uint32_t number = 4;

    bool check = (number >= 0 && number <= 10);

    std::cout << "Check: " << check << std::endl;
    std::cout << "Check: " << std::boolalpha << check << std::endl;

    return 0;
}
