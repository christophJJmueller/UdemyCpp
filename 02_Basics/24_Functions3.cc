#include <iostream>
#include <cstdint>

//Funktion ohne Return-Wert

//Return Type  F-Name  (Parameter)
std::int32_t user_input()
{
    std::int32_t number = 0;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    return number;
}

bool is_even(std::int32_t number)
{
    return number % 2 == 0;
}

void print_bool_value(bool value)
{
    std::cout << std::boolalpha << value;
}


int main()
{
    std::int32_t input_number = user_input();

    bool result_even = is_even(input_number);
    print_bool_value(result_even);

    return 0;
}
