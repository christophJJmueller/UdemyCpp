#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

// https://en.cppreference.com/w/cpp/algorithm/transform

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

//Unäre Funktion: Nur 1 Parameter!
std::int32_t func1(const std::int32_t value)
{
    return value * 2;
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);

    const auto start_time = ClockType::now();

    //Alternative zur for-Schleife
    std::generate(my_vector.begin(), my_vector.end(), gen);
    print_vector(my_vector);

    const auto end_time = ClockType::now();

    const auto elapsed_time = std::chrono::duration_cast<ClockRes>(end_time-start_time).count();

    std::cout << "Elapsed Time: " << elapsed_time << std::endl;

    //alle Zahlen mit "2" multiplizieren -> for-Schleife oder transform()
    //Unterschied generate <> transform
    //generate: Werte im Vektor werden immer überschrieben, kein Zugriff möglich
    //transform: Wertzugriff möglich
    std::transform(my_vector.begin(), my_vector.end(), my_vector.begin(), func1);
    print_vector(my_vector);

    return 0;
}
