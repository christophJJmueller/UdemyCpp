#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
/*

1) auto val : myvector -> int val : myvector
    erzeugt Kopie der ursprünglichen Variable -> ggf. sehr Speicherintensiv
2) const auto val : myvector
    wie 1), aber Read-only
3) auto &val : myvector
    erzeugt Referenz auf den ursprünglichen Wert; d.h. keine Kopie
4) const auto & val : myvector
    wie 3), aber Read-only
*/

int main()
{
    auto myvector = std::vector<int>{-1, 20, 13, -8, 5};

    //1
    for (auto val : myvector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    //2
    for (const auto val : myvector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    //3
    for (auto &val : myvector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    //4
    for (const auto &val : myvector)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
