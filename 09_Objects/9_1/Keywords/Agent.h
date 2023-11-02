#pragma once

#include <iostream>
#include <string>

// Keywords für Constructor und Destructor
// default
// delete

// Keywords virtuelle Funktionen -> Verwendung in Kinderklasse
// override
// final

class Agent
{
public:
    //"leerer" Konstruktor wird bewusst nicht zur Verfügung gestellt.
    Agent() = delete;

    Agent(const std::string &name,
          const std::uint32_t id,
          const std::uint32_t hp = 0U,
          const std::uint32_t energy = 0U)
        : m_name(name), m_id(id), m_hp(hp), m_energy(energy)
    {
        std::cout << "Agent Constructor!" << '\n';
    }

    //Destructor = default -> Compiler generiert den Destructor Code selber
    //Keyword "default" drückt Absicht des Programmiers aus!
    virtual ~Agent() = default;

    virtual void print_agent_data() const
    {
        std::cout << "Agent hp: " << m_hp << ", energy: " << m_energy << '\n';
    }

protected:
    //Const Member-Variablen müssen definiert werden!
    const std::string m_name;
    const std::uint32_t m_id;
    std::uint32_t m_hp = 0U;
    std::uint32_t m_energy = 0U;
};

class Player : public Agent
{
public:
    Player(const std::string &name,
           const std::uint32_t id,
           const std::uint32_t hp = 0U,
           const std::uint32_t energy = 0U)
        : Agent(name, id, hp, energy)
    {
        std::cout << "Player Constructor!" << '\n';
    }

    ~Player()
    {
        std::cout << "Player Destructor!" << '\n';
    }

    void print_agent_data() const final
    {
        std::cout << "Player hp: " << m_hp << ", energy: " << m_energy << '\n';
    }
};

class NPC : public Agent
{
public:
    NPC(const std::string &name,
        const std::uint32_t id,
        const std::uint32_t hp = 0U,
        const std::uint32_t energy = 0U)
        : Agent(name, id, hp, energy)
    {
        std::cout << "NPC Constructor!" << '\n';
    }

    ~NPC()
    {
        std::cout << "NPC Destructor!" << '\n';
    }

    void print_agent_data() const final
    {
        std::cout << "NPC hp: " << m_hp << ", energy: " << m_energy << '\n';
    }
};
