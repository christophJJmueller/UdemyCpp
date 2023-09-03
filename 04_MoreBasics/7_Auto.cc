#include <iostream>
#include <cstdint>

enum class Lane
{
    LEFT_LANE,
    CENTER_LANE,
    RIGHT_LANE,
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Velocity [kph]: " << vehicle.velocity << std::endl;
    //std::cout << "Lane Association: " << vehicle.lane << std::endl; // Ausgabe vehicle.lane schwierig, da Datentyp "enum"
    //OPTIONEN: Switch-Abfrage, static-cast,

    //1 static cast
    //std::cout << "Lane Association: " << static_cast<int>(vehicle.lane) << std::endl;

    //2 switch case
    switch (vehicle.lane)
    {
    case Lane::LEFT_LANE:
        std::cout << "Lane Association: LEFT LANE" << std::endl;
        break;
    case Lane::CENTER_LANE:
        std::cout << "Lane Association: CENTER LANE" << std::endl;
        break;
    case Lane::RIGHT_LANE:
        std::cout << "Lane Association: RIGHT LANE" << std::endl;
        break;
    default:
        break;
    }
}

//Pointer von Struktur -> Punkt-Operator nicht möglich; stattdessen: Pfeil-Operator!
void print_vehicle_data_pointer(Vehicle *vehicle)
{
    std::cout << "Vehicle ID: " << vehicle->id << std::endl;
    std::cout << "Vehicle Velocity [kph]: " << vehicle->velocity << std::endl;

    switch (vehicle->lane)
    {
    case Lane::LEFT_LANE:
        std::cout << "Lane Association: LEFT LANE" << std::endl;
        break;
    case Lane::CENTER_LANE:
        std::cout << "Lane Association: CENTER LANE" << std::endl;
        break;
    case Lane::RIGHT_LANE:
        std::cout << "Lane Association: RIGHT LANE" << std::endl;
        break;
    default:
        break;
    }
}


int main()
{
    //Beispiel für auto Keyword
    auto current_lane = Lane::CENTER_LANE; //enum
    auto v1 = Vehicle{.id=2, .velocity=50.0f, .lane = Lane::RIGHT_LANE}; //struct


    //Vehicle v1 = {.id=1, .velocity=100.0f, .lane = Lane::CENTER_LANE};
    print_vehicle_data(v1);
    print_vehicle_data_pointer(&v1);


    return 0;
}
