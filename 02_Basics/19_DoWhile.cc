#include <iostream>
#include <cstdint>

//do-while Schleife, wenn mindestens eine Iteration ausgeführt werden soll

int main()
{
    //Variablen
    std::int32_t sum_of_input = 11;     //While-Kriterium bereits zu Beginn gebrochen -> Bei While-Schleife keine Iteration!
    std::int32_t user_input;

    //User Input
    do
    {
        std::cout << "enter number: " << std::endl;
        std::cin >> user_input;

        sum_of_input += user_input;

    } while (sum_of_input <= 10);

    return 0;
}
