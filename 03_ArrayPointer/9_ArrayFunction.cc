#include <iostream>
#include <cstdint>

void print_array(const std::int32_t array[], const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << array[i] << '\n';
    }
}

int main()
{
    const std::int32_t values[]{1, 2, 3};

    //sizeof() liefert die Speichergröße der Variable, nicht die Länge des Arrays
    print_array(values, 3);
    return 0;
}
