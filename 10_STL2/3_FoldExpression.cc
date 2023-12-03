#include <iostream>
#include <string>

//Funktion seit C++ 2017
//"Ersatz" für Variadic Arguments

//Überladung / Abbruchkriterium für Sonderfall "Ein Argument"
//nicht notwendig

template <typename T, typename... Args>
T concat(Args... args)
{
    //Reihenfolge beachten!
    //https://en.cppreference.com/w/cpp/language/fold
    return (... + args);
}

int main()
{
    const auto s1 = std::string{"Ha"};
    const auto s2 = std::string{"ll"};
    const auto s3 = std::string{"o"};

    std::cout << concat<std::string>(s1, s2, s3) << '\n';
    std::cout << concat<int>(1, 2, 3) << '\n';

    return 0;
}
