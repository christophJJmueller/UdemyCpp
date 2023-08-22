#include <iostream>
#include <cstdint>

//Vergleichsoperatoren
/*
Greater Equal:  >=
Greater:        >
Equal:          ==
Less:           <<
Less Equal      <=

AND             &&
OR              ||
*/

int main()
{
    // Variablen
    std::uint32_t number;

    // User Input
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

    return 0;
}
