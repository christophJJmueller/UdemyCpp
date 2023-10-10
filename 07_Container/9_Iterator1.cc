#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

int main()
{
    auto my_vec = std::vector<int>{0,1,2,3,4,5};

    //ForwardIterator
    auto it1 = my_vec.begin();
    auto it2 = my_vec.end();

    for (; it1 != it2; ++it1)
    {
        *it1 = 1;
    }

    //ConstForwardIterator
    // auto it3 = my_vec.cbegin();
    // auto it4 = my_vec.cend();

    // for (; it3 != it4; ++it3)
    // {
    //     *it3 = 1;   //Fehlermeldung -> const!
    // }

    //Bi-directional Iterator
    auto it5 = my_vec.rbegin();
    auto it6 = my_vec.rend();

    for (; it5 != it6; ++it5)
    {
        *it5 = 2;
    }

    //Const Bi-directional Iterator
    // auto it7 = my_vec.crbegin();
    // auto it8 = my_vec.crend();

    // for (; it7 != it8; ++it7)
    // {
    //     *it7 = 2;   //Fehlermeldung -> const!
    // }

    return 0;
}
