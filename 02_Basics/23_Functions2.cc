#include <iostream>
#include <cstdint>

//Beispiel: überprüfen, ob die eingegeben Zahl grade ist

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

int main()
{
    std::int32_t input_number = user_input();

    if (is_even(input_number))
    {
        std::cout << "The number you entered is even." << std::endl;
    }
    else
        std::cout << "The number you entered is not even." << std::endl;

    return 0;
}
