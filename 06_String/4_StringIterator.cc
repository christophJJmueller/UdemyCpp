#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

int main()
{
    const auto text = std::string{"Eins, Zwei, Drei"};

    const auto first_char = text[0];
    std::cout << first_char << std::endl;

    //Iteratoren
    for (auto it = text.begin(); it != text.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << std::endl;
    std::cout << std::endl;

        //range-based loop -> besser, wenn vorwärts iteriert werden soll
    for (const auto c : text)
    {
        std::cout << c;
    }

    std::cout << std::endl;
    std::cout << std::endl;

        //reverse
    for (auto r_it = text.rbegin(); r_it != text.rend(); r_it++)
    {
        std::cout << *r_it;
    }

    std::cout << std::endl;
    std::cout << std::endl;


    //push_back, pop_back
        //nur einzelne Zeichen können verwendet werden
        //ineffizient

    //to_string
    const auto value = 10.3F;
    const auto value_str =std::to_string(value);
    std::cout << value_str << std::endl;


    return 0;
}
