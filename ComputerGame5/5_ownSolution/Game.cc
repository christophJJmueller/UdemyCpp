#include <cstdint>
#include <iostream>

#include "Game.h"

//Erweiterung Spielfeld auf 2D

namespace
{
constexpr static std::uint32_t LEN_X = 5U;
constexpr static std::uint32_t LEN_Y = 5U;

//constexpr static std::uint32_t START = 0U;
//constexpr static std::uint32_t GOAL = 9U;
const auto START = Coordinate{.x=0, .y=0};
const auto GOAL = Coordinate{.x=LEN_X-1, .y=LEN_Y-1};
}; // namespace

bool is_finished(const Coordinate player)
{
    return player.x == GOAL.x && player.y ==GOAL.y;
}

void print_game_state(const Coordinate player)
{
    for (std::uint32_t i = START.y; i < LEN_Y; i++)
    {
        for (std::uint32_t j = START.x; j < LEN_X; j++)
        {
            if (i == player.y && j == player.x)
            {
                std::cout << 'P';
            }
            else if ((i == GOAL.y && j == GOAL.x) || (i == START.y && j == START.x))
            {
                std::cout << '|';
            }
            else
            {
                std::cout << '.';
            }
        }
        std::cout << std::endl;
    }
}

void execute_move(Coordinate &player, UserInput move)
{
    switch (move)
    {
    case UserInput::LEFT:
        if (player.x > 0)
        {
            player.x--;
        }
        break;

    case UserInput::RIGHT:
        if (player.x < (LEN_X - 1))
        {
            player.x++;
        }
        break;

    case UserInput::UP:
        if (player.y > 0)
        {
            player.y--;
        }
        break;

    case UserInput::DOWN:
        if (player.y < (LEN_Y - 1))
        {
            player.y++;
        }
        break;

    case UserInput::INVALID:
    default:
        std::cout << "Unrecognized move!\n";
        break;
    }
}

void game()
{
    auto player = START;
    auto move = UserInput::INVALID;
    char user_input = ' ';

    while (true)
    {
        if (is_finished(player))
        {
            break;
        }

        print_game_state(player);
        std::cin >> user_input;
        move = static_cast<UserInput>(user_input);
        execute_move(player, move);
    }
}
