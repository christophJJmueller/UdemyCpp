#include <iostream>
#include <cstdint>

int main()
{
    auto k = double{0.0F};
    std::cout << k << std::endl;

    //Good = Uniform Initialization
    //automatische Fehlermeldungen beim Compilieren
    auto l = int{k};
    std::cout << l << std::endl;

    //Bad = implizites Casting
    int m = k;
    std::cout << m << std::endl;

    //Semi-Bad
    auto n = static_cast<int>(k);
    std::cout << n << std::endl;


    return 0;
}
