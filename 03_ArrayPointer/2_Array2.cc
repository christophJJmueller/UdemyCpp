#include <iostream>
#include <cstdint>

//2 Float-Arrays erstellen, die mit Nutzereingabe gefüllt werden
//anschließend Elementweise addieren

int main()
{
    //Variablen
    constexpr auto len = std::uint32_t{10u};

    float vector1[len];
    float vector2[len];

    //User Input
    std::cout << "Please enter the 10 values of vector1: " << std::endl;
    for (std::uint32_t j = 0; j < len; j++)
    {
        std::cin >> vector1[j];
    }

    std::cout << "Please enter the 10 values of vector2: " << std::endl;
    for (std::uint32_t j = 0; j < len; j++)
    {
        std::cin >> vector2[j];
    }

    //Console Output
    //Vector1
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << vector1[i] << " ";
    }
    std::cout << std::endl;

    //Vector2
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << vector2[i] << " ";
    }
    std::cout << std::endl;

    //Addition
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << vector1[i] + vector2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
