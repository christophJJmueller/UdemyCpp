#include <iostream>

#include "exercise.h"

// Exercise 2
std::string_view get_oldest_friend(const Friends &friends)
{
    auto oldest_friend = std::string_view{};
    auto temp_age = 0U;

    for (auto f : friends)
    {
        if (f.second.first > temp_age)
            oldest_friend = f.first;
    }

    return oldest_friend;
}

std::string_view get_heaviest_friend(const Friends &friends)
{
    auto heaviest_friend = std::string_view{};
    auto temp_weight = 0U;

    for (auto f : friends)
    {
        if (f.second.second > temp_weight)
            heaviest_friend = f.first;
    }

    return heaviest_friend;
}
