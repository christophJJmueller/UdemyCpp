#include <iostream>
#include <cstdint>

//Aufgabe: Rekursive Funktion -> Summe bis einschließlich N ausgeben

std::uint32_t RecSum(std::uint32_t n)
{
    if (n>0)
    {
        return n + RecSum(n-1);
    }
    else
        return 0;
}

int main()
{
    std::uint32_t n = 5;
    std::uint32_t n_sum = RecSum(n);

    std::cout << n << "_sum = " << n_sum << std::endl;

    return 0;
}
