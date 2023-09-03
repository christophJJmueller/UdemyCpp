#include <iostream>

#include "exercise.h"


void print_player_position(PlayerData &player)
{
    std::cout << "Player " << player.id << " is currently at Position X=" << player.x_pos << " and Y=" << player.y_pos << std::endl;
}
