#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

void print_index(const std::size_t idx, const std::string &func_name)
{
    std::cout << "Function: " << func_name << std::endl;
    if (idx != std::string::npos)
    {
        std::cout << "Fount at index: " << idx << std::endl;
    }
    else
        std::cout << "Not found!" << std::endl;
}

int main()
{
    const auto text = std::string{"Eins, Zwei, Drei"};

    const auto search_string1 = "i";
    const auto idx1 = text.find(search_string1);     // finds the first occurrence of the given substring
    print_index(idx1, ".find()");

    const auto search_string2 = "i";
    const auto idx2 = text.rfind(search_string2);     // finds the last occurrence of the given substring
    print_index(idx2, ".rfind()");

    const auto search_string3 = "ZD";
    const auto idx3 = text.find_first_of(search_string3);     // find first occurrence of characters
    print_index(idx3, ".find_first_of()");

    const auto search_string4 = "ZD";
    const auto idx4 = text.find_last_of(search_string4);     // find last occurrence of characters
    print_index(idx4, ".find_last_of()");

    return 0;
}
