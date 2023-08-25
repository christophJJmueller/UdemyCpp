#include <iostream>
#include <cstdint>

//#define = Textersetzung, KEINE Variable
//meistens in CAPS LOCK geschrieben, da unveränderlich
#define NUM_PLAYERS 2

//#defines in moderner C++ Programmierung eher nicht als Textersatz verwenden,
//sondern eher zum Aktivieren / Deaktivieren von Code-Abschnitten
#define MODE_1
//Vorteil: inaktive Codezeilen existieren im Compiler nicht -> schneller

int main()
{
    std::cout << NUM_PLAYERS << std::endl;

    #ifdef MODE_1
        std::cout << "MODE_1 aktiv" << std::endl;
    #else
        std::cout << "MODE_1 inaktiv" << std::endl;
    #endif

    return 0;
}
