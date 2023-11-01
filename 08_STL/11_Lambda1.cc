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
//    Param Code Logik

void print_vector(const std::vector<std::int32_t> &vector)
{
    for (const auto v : vector)
    {
        std::cout << v << std::endl;
    }
    std::cout << std::endl;
}

bool check_even(const int value)
{
    return (value % 2) == 0;
}

int main()
{
    auto my_vector = std::vector<int>(10,0);
    std::iota(my_vector.begin(), my_vector.end(), 0);
    print_vector(my_vector);

    auto my_result1 = std::vector<int>(10,0);
    //transform ohne Lambda Funktion
    std::transform(my_vector.begin(), my_vector.end(), my_result1.begin(), check_even);
    print_vector(my_result1);

    //transform mit Lambda Funktion
    auto my_result2 = std::vector<int>(10,0);
    std::transform(my_vector.begin(), my_vector.end(), my_result2.begin(), [](const auto value){return (value % 2) == 0;});
    print_vector(my_result2);

    //copy_if
    auto my_result3 = std::vector<int>{};
    std::copy_if(my_vector.begin(), my_vector.end(), std::back_inserter(my_result3), [](const auto value){return (value % 2) == 0;});
    print_vector(my_result3);

    return 0;
}
