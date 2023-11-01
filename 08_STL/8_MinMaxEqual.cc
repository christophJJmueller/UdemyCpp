#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

// https://en.cppreference.com/w/cpp/algorithm/min_element
// https://en.cppreference.com/w/cpp/algorithm/max_element
// https://en.cppreference.com/w/cpp/algorithm/equal

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

struct Data
{
    std::int32_t v1;
    std::int32_t v2;
};

bool comp(const Data &i, const Data &j)
{
    return i.v1 < j.v1 && i.v2 < j.v2;
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);
    std::generate(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);
    auto my_vector1 = my_vector;

    //Minimum
    const auto min = std::min_element(my_vector.begin(), my_vector.end());

    //Maximum
    const auto max = std::max_element(my_vector.begin(), my_vector.end());

    std::cout << "Min: " << *min << " Max: " << *max << std::endl;


    //Compare Funktion z.B. dann, wenn für den Container die logische Operation nicht definiert ist (z.B. < bei Struct)
    auto my_vector2 = std::vector<Data>{Data{0,0}, Data{-1,1}};
    //Minimum
    const auto min2 = std::min_element(my_vector2.begin(), my_vector2.end(), comp);

    //Maximum
    const auto max2 = std::max_element(my_vector2.begin(), my_vector2.end(), comp);


    //Equal Funktion -> LÄNGE BEACHTEN!
    const auto eq = std::equal(my_vector.begin(), my_vector.end(), my_vector1.begin());
    std::cout << "Equal? " << std::boolalpha << eq << std::endl;

    return 0;
}
