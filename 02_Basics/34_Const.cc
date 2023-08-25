#include <iostream>
#include <cstdint>

//Keyword für lokale Variable (z.B. in einer Funktion), die nicht verändert werden soll -> const
//const = Variable kann während der Runtime nicht verändert werden!
/*
Vorteile:
-> direkt ersichtlich, ob Variable verändert wird oder nicht
-> Compiler kann Code ggf. besser optimieren
*/

int func(const int val)
{
    const int temp = val * 2;

    return temp / 3;
}

int main()
{
    std::cout << func(2) << '\n';
    return 0;
}
