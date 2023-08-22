#include <iostream>
#include <cstdint>

int main()
{
    //Variablen
    char LEFT = 'a';
    char RIGHT = 'd';

    char MOVEMENT;

    //User Input
    std::cout << "Please enter your next Movement (a|d): " << std::endl;
    std::cin >> MOVEMENT;

    //Logik
    if (MOVEMENT == LEFT)
        std::cout << "Going LEFT" << std::endl;
    else if (MOVEMENT == RIGHT)
        std::cout << "GOING RIGHT" << std::endl;
    else
        std::cout << "WRONG INPUT!" << std::endl;
    return 0;
}
