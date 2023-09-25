#include <iostream>
#include <cstdint>
#include <vector>

//Size = Number of elements currentyl saved in vector
//Capacity = max. number of elements in currently allocated heap memory

int main()
{
    //leerer Vector
    auto my_vector = std::vector<std::int32_t>{};

    for (std::size_t i = 0; i < 9; i++)
    {
        my_vector.push_back(i);
    }

    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;

    my_vector.push_back(19);

    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;


    return 0;
}
