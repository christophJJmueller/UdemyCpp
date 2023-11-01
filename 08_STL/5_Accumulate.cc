#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <execution>

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

// https://en.cppreference.com/w/cpp/algorithm/reduce

/*
Reduce und Accumulate:
- Reduce kann Abläufe parallelisieren und ist daher schneller. ACHTUNG: Werte werden ggf. Vertauscht -> Kommutativgesetz beachten!
    Parallelisieren lohnt sich nur bei sehr sehr großen Containern (>> 1'000'000 Einträge)
- Accumulate ist tendenziell langsamer, aber vertauscht keine Werte!
*/

//globale konstante Variable
constexpr static auto NUM_ELEMENTS = 1'000'000U;

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

std::int32_t func1(const std::int32_t value1, const std::int32_t value2)
{
    return value1 * value2;
}

int main()
{
    auto my_vector = std::vector<std::int32_t>(NUM_ELEMENTS, 0U);

    const auto start_time = ClockType::now();

    //Alternative zur for-Schleife
    std::generate(my_vector.begin(), my_vector.end(), gen);

    const auto end_time = ClockType::now();
    const auto elapsed_time = std::chrono::duration_cast<ClockRes>(end_time-start_time).count();
    std::cout << "Elapsed Time: " << elapsed_time << std::endl;

    //Summe Vektor + 0
    const auto start_time1 = ClockType::now();
    const auto sum1 = std::accumulate(my_vector.begin(), my_vector.end(), 0);
    const auto end_time1 = ClockType::now();
    const auto elapsed_time1 = std::chrono::duration_cast<ClockRes>(end_time1-start_time1).count();
    std::cout << "Elapsed Time1: " << elapsed_time1 << std::endl;
    std::cout << "Sum1: " << sum1 << std::endl;

    return 0;
}
