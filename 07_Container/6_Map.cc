#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <map>

int main()
{
    auto my_map = std::map<std::string, std::uint32_t>{};

    //Reihenfolge ist nicht definiert!

    my_map["Jan"] = 28;
    my_map["Dennis"] = 31;
    my_map["Lisa"] = 33;

    for (const auto &val : my_map)
    {
        std::cout << val.first << " " << val.second << std::endl;   //map gibt ein Pair zurück (Key, Value)
    }

    //Überprüfen, ob ein Wert vorliegt
    //C++17
    auto search_str = "Jan";
    const auto search_it = my_map.find(search_str);
    bool found_key = search_it != my_map.end();

    //ab C++20
    //bool found_key_2 = my_map.contains(search_str);

    return 0;
}
