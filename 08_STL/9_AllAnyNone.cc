#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

// https://en.cppreference.com/w/cpp/algorithm/all_any_none_of

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

bool func1(const std::int32_t val)
{
    return (val > -5) && (val < 5);
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);

    const auto check1 = std::all_of(my_vector.begin(), my_vector.end(), func1);
    const auto check2 = std::any_of(my_vector.begin(), my_vector.end(), func1);
    const auto check3 = std::none_of(my_vector.begin(), my_vector.end(), func1);

    std::cout << std::boolalpha << check1 << std::endl;
    std::cout << std::boolalpha << check2 << std::endl;
    std::cout << std::boolalpha << check3 << std::endl;

    return 0;
}
