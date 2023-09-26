#include <iostream>
#include <cstdint>
#include <vector>

//reserve, clear, shrink_to_fit

void print_vector_info(const std::vector<int> &vec)
{
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capa: " << vec.capacity() << std::endl;
    std::cout << "Empty?: " << std::boolalpha << vec.empty() << std::endl;
}

int main()
{
    std::vector<int> my_vector;
    print_vector_info(my_vector);

    std::vector<int> my_vector2(10,0);
    print_vector_info(my_vector2);

    //.reserve allociert schon vorher den später benötigten Speicher -> ggf. schneller bei häufigen push_backs
    my_vector2.reserve(13);

    my_vector2.push_back(1);
    my_vector2.push_back(2);
    my_vector2.push_back(3);
    print_vector_info(my_vector2);

    //clear setzt Size auf 0 - Werte werden nicht gelöscht; Capacity bleibt unverändert
    my_vector2.clear();
    print_vector_info(my_vector2);

    //shrink_to_fit passt Capacity an aktuelle Size an
    my_vector2.shrink_to_fit();
    print_vector_info(my_vector2);


    return 0;
}
