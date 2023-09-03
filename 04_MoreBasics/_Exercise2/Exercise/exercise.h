#pragma once


enum class Team
 {
    ALLIED,
    ENEMY,
 };

struct PlayerData
{
    uint32_t id;
    float x_pos;
    float y_pos;
    uint32_t health;
    uint32_t energy;
    Team team;

};

void print_player_position(PlayerData &player);
