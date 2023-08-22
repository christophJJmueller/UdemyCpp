#include <iostream>
#include <cstdint>

// Aufgabe
/*
1. User Input Integer
2. Calculate absolute Value
3. Console Output of result
*/

int main()
{
    //Variable
    std::int32_t user_input;

    //User Input
    std::cout << "Please enter your number to calculate the absolute value: " << std::endl;
    std::cin >> user_input;

    //absolute value
    if (user_input < 0)
    {
        std::cout << "The absolute value is " << -user_input << std::endl;
    }
    else
    {
        std::cout << "The absolute value is " << user_input << std::endl;
    }

    return 0;
}
