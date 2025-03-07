#pragma once
#include <string>

class AttackInterface
{
public:
    AttackInterface() = default;
    ~AttackInterface() = default;

    virtual void attack() = 0;

};

class Weapon : public AttackInterface
{
public:
    Weapon(const std::string &_name, const float _damage, const float _attack_speed, const bool _single_handed, const bool _dual_handed)
        : m_name(_name), m_damage(_damage), m_attack_speed(_attack_speed), m_single_handed(_single_handed), m_dual_handed(_dual_handed){};

    ~Weapon() = default;

    std::string get_name() const;
    float get_damage() const;
    float get_attack_speed() const;
    bool get_is_single_handed() const;
    bool get_is_dual_handed() const;

protected:
    std::string m_name;
    float m_damage;
    float m_attack_speed;
    bool m_single_handed;
    bool m_dual_handed;
};

class Axe : public Weapon
{
public:
    Axe(const std::string &_name, const float _damage, const float _attack_speed)
        : Weapon(_name, _damage, _attack_speed, true, false){};

    ~Axe() = default;

    void attack() final;
};

class Longbow : public Weapon
{
public:
    Longbow(const std::string &_name, const float _damage, const float _attack_speed)
        : Weapon(_name, _damage, _attack_speed, false, true){};

    ~Longbow() = default;

    void attack() final;
};
