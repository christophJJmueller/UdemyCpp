#include <cstdint>
#include <iostream>

#include "exercise2.h"

// Exercise 1
void push_back(std::int32_t *&input_array,
               const std::size_t size,
               const std::int32_t value)
{
    auto *temp = new std::int32_t[size+1];
    for (std::size_t i = 0; i < size; i++)
    {
        temp[i] = input_array[i];
    }

    temp[size] = value;

    delete[] input_array;

    input_array = temp;
}

// Exercise 2
void pop_back(std::int32_t *&input_array, const std::size_t size)
{
    auto *temp_array = new std::int32_t[size-1];
    for (std::size_t i = 0; i < size; i++)
    {
        temp_array[i] = input_array[i];
    }
    delete[] input_array;

    input_array = temp_array;

}
