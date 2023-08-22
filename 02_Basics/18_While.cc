#include <iostream>
#include <cstdint>

int main()
{
    //Variablen
    std::int32_t sum_of_input = 0;
    std::int32_t user_input;

    //User Input
    while (sum_of_input <= 10)
    {
        std::cout << "enter number: " << std::endl;
        std::cin >> user_input;

        sum_of_input += user_input;
    }


    return 0;
}
