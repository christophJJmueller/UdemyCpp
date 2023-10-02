#include <bitset>
#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    //std::bitset: normalerweise nicht im operativen Code verwendet -> eher zu Schulungszwecken
    const auto my_byte1 = std::bitset<8>("00011101");
    const auto my_byte2 = std::bitset<8>("10010101");
    std::cout << my_byte1 << '\n';
    std::cout << my_byte2 << '\n';

    //bit-weiser Vergleich
    std::cout << "AND: " << (my_byte1 & my_byte2) << '\n';  //00010101
    std::cout << "OR: " << (my_byte1 | my_byte2) << '\n';   //10011101
    std::cout << "XOR: " << (my_byte1 ^ my_byte2) << '\n';  //10001000
    std::cout << "NEGATION: " << ~my_byte1 << '\n';         //11100010

    //Anwendbar auf dezimal, hxadezimale oder binäre Zahlen
    const auto v1 = 0x01;                                   //00000001
    const auto v2 = 0xFF;                                   //11111111
    std::cout << static_cast<int>(v1) << '\n';
    std::cout << static_cast<int>(v2) << '\n';

    std::cout << "AND: " << (v1 & v2) << '\n';              //00000001
    std::cout << "OR: " << (v1 | v2) << '\n';               //11111111
    std::cout << "XOR: " << (v1 ^ v2) << '\n';              //11111110
    std::cout << "NEGATION: " << ~v1 << '\n';               //11111110

    return 0;
}
