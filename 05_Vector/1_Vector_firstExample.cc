#include <iostream>
#include <cstdint>
#include <vector>

//std::vector = dyn. Array
//https://en.cppreference.com/w/cpp/container/vector

void print_vector(const std::vector<std::int32_t> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << std::endl;

}

int main()
{
    //Initialisierung
    auto my_vector = std::vector<std::int32_t>(5,0);
    print_vector(my_vector);

    my_vector[0] = 1337;
    print_vector(my_vector);

    //Wert hinzufügen (am Ende)
    my_vector.push_back(42);
    print_vector(my_vector);

    //Wert am Ende entfernen
    my_vector.pop_back();
    my_vector.pop_back();
    my_vector.pop_back();
    print_vector(my_vector);

    return 0;
}
