#include <iostream>

//Grundrechenarten

int main()
{
    float my_value1 = 10.0;
    float my_value2 = 5.0;

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
