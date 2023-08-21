#include <iostream>
#include <cstdint>

// siehe ASCII Tabelle
//https://www.rapidtables.com/code/text/ascii-table.html

//heutzutage: UTF-8 Standard -> Umlaute, Sonderzeichen, Emojis

int main()
{
    char letter_A = 'A';

    std::cout << letter_A << std::endl;
    std::cout << int(letter_A) << std::endl;

    //"rechnen" mit Zeichen / Buchstaben
    char letter2 = letter_A + 27;

    std::cout << letter2 << std::endl;
    std::cout << int(letter2) << std::endl;

    return 0;
}
