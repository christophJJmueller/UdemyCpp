#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

// https://en.cppreference.com/w/cpp/algorithm/random_shuffle

//globale konstante Variable
constexpr static auto NUM_ELEMENTS = 10U;

std::int32_t gen()
{
    //ohne static werden die 3 Variablen bei jedem Aufruf neu erzeugt
    //mit static werden die Variablen beim Compilieren belegt und gespeichert
    static auto seed = std::random_device{}; //erzeugt richtige Zufallszahl!
    static auto gen = std::mt19937{seed()};
    static auto dist = std::uniform_int_distribution<std::int32_t>{-10, 10};

    return dist(gen);
}

void print_vector(const std::vector<std::int32_t> &vector)
{
    for (const auto v : vector)
    {
        std::cout << v << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);

    auto seed = std::random_device{};
    auto gen = std::mt19937{seed()};

    std::shuffle(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);

    return 0;
}
