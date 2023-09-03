#include <iostream>

#include "exercise.h"


int main()
{
    auto player1 = PlayerData{.id = 1, .x_pos=10.0F, .y_pos=20.0F, .health = 100, .energy = 100, .team = Team::ALLIED};
    auto player2 = PlayerData{.id = 2, .x_pos=5.0F, .y_pos=10.0F, .health = 75, .energy=200, .team = Team::ENEMY};
    //PlayerData player_1 = {1, 10.0F, 20.0F, 100, 100, Team::ENEMY};

    print_player_position(player1);
    print_player_position(player2);

    return 0;
}
