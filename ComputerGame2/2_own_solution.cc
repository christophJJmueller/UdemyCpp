#include <cstdint>
#include <iostream>

//Erweiterung
/*
Spieleumgebung ausgeben
so lange bewegen, bis Ziel erreicht
*/

int main()
{
    //Variablen
    std::uint32_t LEN_X = 10;
    std::uint32_t START = 0;
    std::uint32_t GOAL = 9;
    std::uint32_t player = 0;
    char LEFT = 'a';
    char RIGHT = 'd';
    char move = '0';


    while (true)
    {
        if (player == GOAL)
        {
            break;
        }

        for (std::uint32_t i=START; i<LEN_X; i++)
        {
            if (i==player)
            {
                std::cout << "P";
            }
            else if (i==GOAL || i==START)
            {
                std::cout << "|";
            }
            else
                std::cout << ".";
        }

        std::cin >> move;

        if (move == LEFT && player > 0)
        {
            player--;
        }
        else if (move == RIGHT && player < LEN_X-1)
        {
            player++;
        }
        else
        {
            std::cout << "Unrecognized move!\n";
        }
    }

    return 0;
}
