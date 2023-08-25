#include <iostream>
#include <cstdint>

//constexpr vs. const
/*
const wird erst in Runtime beachtet
constexpr wird bereits im Compiler betrachtet
-> constexpr eher als globale Variable
*/

constexpr int VALUE = 2;

int func(const int val)
{
    const int temp = val * 2;

    return temp / 3;
}

int main()
{
    constexpr int v = 2 * 3 * 5;
    std::cout << func(VALUE*v) << '\n';
    return 0;
}
