#include <algorithm>
#include <chrono>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

#include "exercise.h"

// Exercise 2


std::vector<bool> shuffle_till_equal(const BinaryArray &target,
                                     BinaryArray input)
{
    auto is_equal = false;
    auto counter = 1U;

    while (!is_equal)
    {
        //Wie viele Iterationen laufen bereits?
        if (counter % 250000 == 0)
        {
            std::cout << "Iteration: " << counter << std::endl;
        }
        counter++;

        std::shuffle(input.begin(), input.end(), std::default_random_engine{42});

        if (std::equal(input.begin(), input.end(), target.begin()))
        {
            is_equal = true;
        }
    }

    return input;
}

// Exercise 3
std::vector<bool> smart_shuffle_till_equal(const BinaryArray &target,
                                           BinaryArray input)
{
    auto iteration = 1U;

    auto first = input.begin();
    auto last = input.end();

    while (true)
    {
        if (iteration % 100000 == 0)
        {
            std::cout << '\n' << "Iteration: " << iteration;
        }

        auto index = std::distance(input.begin(), first);

        while (first != last && *first == target[index])
            ++first;

        if (first == last)
            break;

        std::shuffle(first, last, std::default_random_engine{42});
        ++iteration;
    }
}
