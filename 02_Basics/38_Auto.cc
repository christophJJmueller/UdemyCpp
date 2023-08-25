#include <iostream>
#include <cstdint>

//keyword auto -> Compiler entscheidet über richtigen Datentyp

int main()
{

    int a = 12;
    auto b = static_cast<float>(a);

    auto c = 12.3;  //double
    auto d = 12.3F; //float

    return 0;
}
