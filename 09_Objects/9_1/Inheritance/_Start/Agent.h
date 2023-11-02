#pragma once

#include <string>
#include <iostream>
#include <cstdint>

//public: von überall erreichbar
//private: nur in der Klasse erreichbar -> NICHT vererbbar
//protected: von außen nicht erreichbar, aber wird vererbt


class Agent
{
public:
    //Constructor
    Agent(const std::string &name, const std::uint32_t id) : m_name(name), m_id(id)
    {
        std::cout << "Agent Constructor" << std::endl;
    }

    //Destructor
    ~Agent()
    {
        std::cout << "Agent Destructor" << std::endl;
    }

protected:
    const std::string m_name;
    const std::uint32_t m_id;
};

class Player : public Agent
{
public:
    //Constructor
    Player(const std::string &name, const std::uint32_t id) : Agent(name, id)
    {
        std::cout << "Player Constructor" << std::endl;
    }

    //Destructor
    ~Player()
    {
        std::cout << "Player Destructor" << std::endl;
    }

    void print_name()
    {
        std::cout << m_name << std::endl;
    }
};

class NPC : public Agent
{
public:
    //Constructor
    NPC(const std::string &name, const std::uint32_t id) : Agent(name, id)
    {
        std::cout << "NPC Constructor" << std::endl;
    }

    //Destructor
    ~NPC()
    {
        std::cout << "NPC Destructor" << std::endl;
    }
};
