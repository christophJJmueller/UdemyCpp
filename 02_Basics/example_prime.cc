#include <iostream>
#include <cstdint>

//Aufgabe
/*
1. User Input Integer number
2. Compute if number is a prime number
3. Console output

Prime number: only divisible by itself and with 1 with a remaining value of 0*/


int main()
{
    //Variablen
    std::uint32_t user_input;
    bool is_prime = true;

    //User Input
    std::cout << "Please enter your number for 'prime check': " << std::endl;
    std::cin >> user_input;

    //prime check
    for (std::uint32_t i = 2; i<user_input; i++)
    {
        if (user_input % i == 0)
        {
            std::cout << "The number you entered is not a prime number." << std::endl;
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        std::cout << "The number you entered is a prime number." << std::endl;

    return 0;
}
