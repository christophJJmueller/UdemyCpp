#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <tuple>
#include <utility> //enthält std::pain

using UserData = std::pair<int, float>;

int main()
{
    auto my_pair = std::pair<int, float>{1, 3.0F};
    std::cout << my_pair.first << std::endl;
    std::cout << my_pair.second << std::endl;

    auto my_tuple = std::tuple<int, float, std::string>{1, 3.0F, "Peter"};
    std::cout << std::get<0>(my_tuple) << std::endl;
    std::cout << std::get<1>(my_tuple) << std::endl;
    std::cout << std::get<2>(my_tuple) << std::endl;

    const auto data = std::vector<UserData>{{1, 3.0F}, {2, 6.0F}};

    for (const auto &d : data)
    {
        std::cout << d.first << " " << d.second << std::endl;
    }

    return 0;
}
