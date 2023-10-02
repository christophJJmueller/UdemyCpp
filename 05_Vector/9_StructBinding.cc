#include <iostream>
#include <cstdint>
#include <vector>

struct Data
{
    float x;
    float y;
};


int main()
{
    auto vec = std::vector<Data>{Data{1.0F, 2.0F}, Data{3.0F, 4.0F}};

    //Variante 1
    for (auto i : vec)
    {
        std::cout << i.x << " " << i.y << std::endl;
    }

    //Variante 2
    //eigene "Zugriffsvariablen" können definiert werden
    for (auto [x_, y_] : vec)
    {
        std::cout << x_ << " " << y_ << std::endl;
    }

    return 0;
}
