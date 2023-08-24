#include <iostream>
#include <cstdint>

//Rekursive Funktionen nur verwenden, wenn es keine andere Möglichkeit gibt!
//Abbruchkriterium sicherstellen!

//Faktultät: 5! = 5*4*3*2*1 = 5*4! = 5*4*3! = ...

std::uint32_t faculty(std::uint32_t number)
{
    if (number > 1)
        return number *faculty(number-1);
    else if (number == 1)
        return 1;
    else
        return 0;

}

int main()
{
    std::uint32_t n = 5;
    std::uint32_t n_fac = faculty(n);

    std::cout << n << "! = " << n_fac << std::endl;

    return 0;
}
