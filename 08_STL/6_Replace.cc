#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

// https://en.cppreference.com/w/cpp/algorithm/replace

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

bool func1(const std::int32_t value)
{
    return value > 0;
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);

    //Einträge "0" mit "1000" ersetzen:
    std::replace(my_vector.begin(), my_vector.end(), 0, 1000);
    print_vector(my_vector);

    //spezielle Logik mit unärer Funktion
    std::replace_if(my_vector.begin(), my_vector.end(), func1, -1);
    print_vector(my_vector);

    return 0;
}
