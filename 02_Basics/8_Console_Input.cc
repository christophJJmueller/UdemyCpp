#include <iostream>
#include <cstdint>

int main()
{
    float my_value1;
    float my_value2;

    std::cout << "Please enter the first number: " << std::endl;
    std::cin >> my_value1;

    std::cout << "Please enter the second number: " << std::endl;
    std::cin >> my_value2;

    float my_result_add = my_value1 + my_value2;
    float my_result_sub = my_value1 - my_value2;
    float my_result_mult = my_value1 * my_value2;
    float my_result_div = my_value1 / my_value2;

    std::cout << "addition: " << my_result_add << std::endl;
    std::cout << "subtraction: " << my_result_sub << std::endl;
    std::cout << "multiplication: " << my_result_mult << std::endl;
    std::cout << "division: " << my_result_div << std::endl;

    return 0;
}
