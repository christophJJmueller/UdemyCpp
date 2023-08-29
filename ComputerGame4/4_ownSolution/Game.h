#pragma once

#include <cstdint>

bool is_finished(const std::uint32_t player);

void print_playfield(const std::uint32_t player);

void execute_movement(std::uint32_t &player, const char move);

void game();
