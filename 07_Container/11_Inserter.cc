#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

int main()
{
    auto my_vec = std::vector<int>{0,1,2,3,4,5};
    auto my_result = std::vector<int>{};
    auto my_list = std::list<int>{};

    //container must implement "insert"
    std::copy(my_vec.begin(), my_vec.end(), std::inserter(my_result, my_result.end())); //inserter benötigt, da my_result leer ist -> .begin() und .end() zeigen auf ungültige Speicherwerte

    //container must implement "push_back"
    std::copy(my_vec.begin(), my_vec.end(), std::back_inserter(my_result));

    //container must implement "push_front"
    std::copy(my_vec.begin(), my_vec.end(), std::front_inserter(my_list));


    return 0;
}
