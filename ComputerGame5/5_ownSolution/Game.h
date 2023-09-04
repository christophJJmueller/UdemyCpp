#pragma once

#include <cstdint>

bool is_finished(const std::uint32_t player);

void print_game_state(const std::uint32_t player);

void execute_move(std::uint32_t &player, const char move);

void game();

struct Coordinate
{
    std::uint32_t x;
    std::uint32_t y;
};

enum class UserInput
{
    INVALID,
    LEFT = 'a',
    RIGHT = 'd',
    UP = 'w',
    DOWN = 's',
};
