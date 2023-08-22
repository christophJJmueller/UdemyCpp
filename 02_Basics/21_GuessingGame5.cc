#include <iostream>
#include <cstdint>

int main()
{
    // Variablen
    std::uint32_t user_input;
    std::uint32_t max_number_attempts = 3;
    bool has_won = false;

    std::cout << "Welcome to my guessing game!" << std::endl;
    std::cout << "You have to guess the number between 0 and 10. You have 3 attempts." << std::endl;

    // User Input

    do
    {
        std::cout << "Please enter your guess: " << std::endl;
        std::cin >> user_input;

        //Logik
        if (user_input >= 0 && user_input <= 10)
        {
            if (user_input == 4)
            {
                std::cout << "Correct! You won!" << std::endl;
                has_won = true;
            }
            else if (user_input%2 == 0 && user_input != 4) //Abfrage "gerade Zahl" UND "nicht 4"
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
    } while (!has_won);



    return 0;
}
