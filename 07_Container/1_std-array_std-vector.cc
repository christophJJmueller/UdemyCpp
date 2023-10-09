#include <array>
#include <vector>
#include <iostream>

//Auswahlhilfe:
//feste Länge: std::array; variable Länge: std::vector
//NIEMALS: C-Style Array!

constexpr static auto ARRAY_LEN = 3U;

int main()
{
    const auto vec = std::vector<int>{1,2,3};
    const auto arr = std::array<int, ARRAY_LEN>{1,2,3};

    //Gemeinsamkeiten
    std::cout << vec.size() << std::endl;
    std::cout << arr.size() << std::endl;

    std::cout << vec.empty() << std::endl;
    std::cout << arr.empty() << std::endl;

    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::cout << std::endl;

    //Unterschiede

    //vec.push_back(4)
    //vec.pop_back();

    //for-each-Schleife
    for (const auto val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;


    return 0;
}
