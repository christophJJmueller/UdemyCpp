#include <iostream>
#include <cstdint>
#include <vector>
#include <random>

//https://en.cppreference.com/w/cpp/header/random

//globale konstante Variable
constexpr static auto NUM_ELEMENTS = 1'000'000U;

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);

    //Generator
    //ACHTUNG: häufig PSEUDO-ZUFALLSZAHLEN! Folgt Berechnungslogik! {} = Seed = Ausgangszustand

    auto seed = std::random_device{}; //erzeugt richtige Zufallszahl!
    auto gen = std::mt19937{seed()};
    auto dist = std::uniform_int_distribution<std::int32_t>{-10, 10};

    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        my_vector[i] = dist(gen);
    }

    for (std::size_t i = 0; i < 10; i++)
    {
        std::cout << my_vector[i] << std::endl;
    }



    return 0;
}
