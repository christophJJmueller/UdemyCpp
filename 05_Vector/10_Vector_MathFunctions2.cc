#include <iostream>
#include <cstdint>
#include <vector>
#include <cmath>

// Exercise:
// for-Schleifen aus "3_Vector_MathFunctions.cc" durch ranged-For ersetzen

void fill_vector(std::vector<double> &vec)
{
    for (std::size_t i = 0; auto &value : vec)
    {
        value = static_cast<double>(i);
        i++;
    }
}

void print_vector(std::vector<double> &vec)
{
    for (std::size_t i = 0; const auto &value : vec)
    {
        std::cout << "Vec[" << i << "] = " << value << std::endl;
        i++;
    }
}

void exp_vector(std::vector<double> &vec)
{
    for (auto &i : vec)
    {
        i = std::exp(i);
    }
}

void log_vector(std::vector<double> &vec)
{
    for (auto &i : vec)
    {
        i = std::log(i);
    }
}

int main()
{
    auto my_vector = std::vector<double>(3, 0.0);

    fill_vector(my_vector);
    print_vector(my_vector);

    exp_vector(my_vector);
    print_vector(my_vector);

    log_vector(my_vector);
    print_vector(my_vector);

    return 0;
}
