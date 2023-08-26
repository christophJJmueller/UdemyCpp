#include <iostream>
#include <cstdint>

int main()
{
    //Textausgabe wird in char Array gespeichert
    // Null-Terminierungssymbol '\0' wird immer am Ende eines Strings angehängt
    std::cout << "HELLO WORLD!" << std::endl;

    char first_name[] = {'C', 'h', 'r', 'i', 's', '\0'};
    std::cout << first_name << std::endl;

    char last_name[] = "Muller";
    std::cout << last_name << std::endl;

    for (std::uint32_t i = 0; i < sizeof(last_name)-1; i++)
    {
        std::cout << last_name[i] << " ";
    }
    std::cout << std::endl;

    last_name[1] = 'o';
    for (std::uint32_t i = 0; i < sizeof(last_name)-1; i++)
    {
        std::cout << last_name[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
