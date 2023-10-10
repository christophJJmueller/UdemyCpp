#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

int main()
{
    auto my_vec = std::vector<int>{0,1,2,3,4,5};

    auto it = my_vec.begin();
    std::advance(it, 2); // entspricht bei std::array und std::vector "it +=2"

    std::cout << "Vector[2]" << *it << std::endl;

    auto dist = std::distance(it, my_vec.end());
    auto dist2 = std::distance(my_vec.begin(), it);

    std::cout << dist << std::endl;
    std::cout << dist2 << std::endl;

    auto prev = std::prev(it);
    std::cout << *prev << std::endl;

    auto next = std::next(it);
    std::cout << *next << std::endl;

    return 0;
}
