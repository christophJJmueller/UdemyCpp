#include "Weapons.h"
#include <iostream>
#include <cstdint>

std::string Weapon::get_name() const
{
    return m_name;
}

float Weapon::get_damage() const
{
    return m_damage;
}

float Weapon::get_attack_speed() const
{
    return m_attack_speed;
}

bool Weapon::get_is_single_handed() const
{
    return m_single_handed;
}

bool Weapon::get_is_dual_handed() const
{
    return m_dual_handed;
}

void Axe::attack()
{
    std::cout << "Attacking with an Axe!" << std::endl;
}

void Longbow::attack()
{
    std::cout << "Attacking with an Longbow!" << std::endl;
}
