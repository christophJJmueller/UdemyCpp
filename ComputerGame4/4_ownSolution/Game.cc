#include <cstdint>
#include <iostream>

#include "Game.h"

namespace
{
constexpr static std::uint32_t LEN_X = 10U;
constexpr static std::uint32_t START = 0U;
constexpr static std::uint32_t GOAL = 9U;
constexpr static char LEFT = 'a';
constexpr static char RIGHT = 'd';
}; // namespace

/*
bool is_finished(const std::uint32_t player);
    player == GOAL

void print_playfield(const std::uint32_t player);
    console output

void execute_movement(std::uint32_t &player, const char move);
    compute user input
*/

bool is_finished(const std::uint32_t player)
{
    return player == GOAL;
}

void print_playfield(const std::uint32_t player)
{
    for (std::uint32_t i = START; i < LEN_X; i++)
        {
            if (i == player)
            {
                std::cout << 'P';
            }
            else if (i == GOAL || i == START)
            {
                std::cout << '|';
            }
            else
            {
                std::cout << '.';
            }
        }
}

void execute_movement(std::uint32_t &player, const char move)
{
    if (LEFT == move && player > 0)
        {
            player--;
        }
        else if (RIGHT == move && player < (LEN_X - 1))
        {
            player++;
        }
        else
        {
            std::cout << "Unrecognized move!\n";
        }
}

void game()
{
    std::uint32_t player = START;
    char move;

    while (!is_finished(player))
    {
        print_playfield(player);

        std::cin >> move;

        execute_movement(player, move);

    }
}
