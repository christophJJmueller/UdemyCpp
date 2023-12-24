#include <iostream>
#include <thread>
#include <cstdint>
#include <array>
#include <numeric>
#include <mutex>

#include "Timer.h"

namespace
{
    constexpr static auto NUM_THREADS = std::uint32_t{3U};
    constexpr static auto NUM_INCREMENTS = std::uint32_t{100'000};

    auto GLOBAL_COUNTER = std::uint32_t{0};
    auto MUTEX_COUNTER = std::mutex{};
} //namespace

//Rückgabewert von Funktionen in std::thread nur über "non-constant l-value reference"
void function(const std::int32_t input, std::int32_t &output)
{
    output = input * 2;

    auto local_counter = std::uint32_t{0};

    //GLOBAL_COUNTER sollte nach 3 Threads 300.000 anzeigen
    /*ABER: durch gleichzeitigen Zugriff mehrerer Threads auf die Variable
    werden manche erhöhungen nicht gezählt.*/
    for (std::uint32_t i = 0; i < NUM_INCREMENTS; i++)
    {
        ++local_counter;
    }

    auto guard = std::lock_guard<std::mutex>(MUTEX_COUNTER);
    GLOBAL_COUNTER += local_counter;

}

int main()
{
    std::array<std::thread, NUM_THREADS> threads;
    auto inputs = std::array<std::int32_t, NUM_THREADS>{};
    auto outputs = std::array<std::int32_t, NUM_THREADS>{};

    //Wertebelegung für Inputs
    std::iota(inputs.begin(), inputs.end(), 0);

    auto timer = cpptiming::Timer();

    for (std::uint32_t i = 0; i < NUM_THREADS; i++)
    {
        threads[i] = std::thread(function, inputs[i], std::ref(outputs[i]));
    }

    // ...

    for (std::uint32_t i = 0; i < NUM_THREADS; i++)
    {
        threads[i].join();
    }

    const auto time_us = timer.elapsed_time<cpptiming::microsecs, double>();
    std::cout << "Time us: " << time_us << std::endl;

    for (std::uint32_t i = 0; i < NUM_THREADS; i++)
    {
        std::cout << "Input: " << inputs[i] << " and Output: " << outputs[i] << '\n';
    }

    std::cout << "Global Counter: " << GLOBAL_COUNTER << std::endl;

    return 0;
}
