#include <cstdint>
#include <iostream>

int main()
{
    const char last_name[] = "Schaffranek";
    std::cout << last_name << '\n'; // std::cout gibt das char-Array als String aus. '\0' wird automatisch erkannt.

    const std::int32_t values[]{1, 2, 3};
    std::cout << values << '\n'; // std::cout gibt die Speicheradresse des ersten Array-Elements aus

    for (std::size_t i = 0; i < 4; i++)
    {
        std::cout << values[i] << '\n';
    }

    return 0;
}
