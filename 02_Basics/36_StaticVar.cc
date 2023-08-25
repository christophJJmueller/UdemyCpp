#include <iostream>
#include <cstdint>

//Keyword "static" zwingt den Compiler, die Variable während der Compile-Time zu verwenden

constexpr static int VALUE = 2;

int func(const int val)
{
    //lokale static Variable hat "Gedächtnis" -> wird einmalig angelegt zur Compile-Time
    static int counter = 0;
    counter++;

    if (counter <= 3)
    {
    const int temp = val * 2;

    return temp / 3;
    }
    else
        return 0;


}

int main()
{
    std::cout << func(VALUE) << '\n';
    std::cout << func(VALUE) << '\n';
    std::cout << func(VALUE) << '\n';
    std::cout << func(VALUE) << '\n';

    return 0;
}
