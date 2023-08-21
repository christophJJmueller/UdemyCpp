#include <iostream>

// Addition *
// Subtraction -
// Multiplication *
// Division /

int main()
{
    float number1 = 10;
    float number2 = 3;
    float result = 0;

    result = number1 * number2;
    std::cout << "number1 * number2 = " << result << std::endl;

    result = number1 + number2;
    std::cout << "number1 + number2 = " << result << std::endl;

    result = number1 - number2;
    std::cout << "number1 - number2 = " << result << std::endl;

    //Variablen als int -> = 3
    //Variablen als float -> = 3.33333
    result = number1 / number2;
    std::cout << "number1 / number2 = " << result << std::endl;

    return 0;
}
