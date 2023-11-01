#include <iostream>
#include <cstdint>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>
#include <iterator>
#include <numeric>

// https://en.cppreference.com/w/cpp/language/lambda
// https://blog.feabhas.com/2014/03/demystifying-c-lambdas/

// SYNTAX:
// [] (...) {...}
//    Param  Code Logik
// []: Captures
//      alle "externen" Variablen, die in der Lambda Funktion verwendet werden sollen, müssen hier angegeben werden
//      [=]: Copy
//      [&]: Reference

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
    auto my_vector = std::vector<int>(10,0);
    std::iota(my_vector.begin(), my_vector.end(), 0);
    print_vector(my_vector);

    //replace_if
    const auto search_value = 2;
    const auto replace_value = 42;

    std::replace_if(my_vector.begin(), my_vector.end(), [search_value](const auto value){return value == search_value;}, replace_value);
    print_vector(my_vector);


    //sort
    auto sorting = [](const auto l, const auto r){return l < r; };
    std::sort(my_vector.begin(), my_vector.end(), sorting);
    print_vector(my_vector);

    return 0;
}
