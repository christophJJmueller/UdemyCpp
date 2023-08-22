#include <iostream>
#include <cstdint>

int main()
{
    // Variablen
    std::uint32_t number;
    std::uint32_t max_number_attempts = 3;

    std::cout << "Welcome to my guessing game!" << std::endl;
    std::cout << "You have to guess the number between 0 and 10. You have 3 attempts." << std::endl;

    // User Input
    for (std::uint32_t current_attempt = 0; current_attempt < max_number_attempts; current_attempt++)
    {
        std::cout << "Please enter your guess: " << std::endl;
        std::cin >> number;

        //Logik
        if (number >= 0 && number <= 10)
        {
            if (number == 4)
            {
                std::cout << "Correct! You won!" << std::endl;
            }
            else if (number%2 == 0 && number != 4) //Abfrage "gerade Zahl" UND "nicht 4"
            {
                std::cout << "Close! You win a consolation prize!" << std::endl;
            }
            else
            {
                std::cout << "Wrong guess! You lost!" << std::endl;
            }
        }
        else
        {
            std::cout << "Number out of Range!" << std::endl;
        }
    }



    return 0;
}
