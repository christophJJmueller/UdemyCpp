#include <iostream>
#include <cstdint>

//Faustregel
/*
Bei 32bit / 64bit Betriebssytemen soll eine Referenz erst ab 32bit / 64bit Datentyp-Größe verwendet werden
Grund: Die erzeugte Pointervariable ist immer 32bit / 64bit groß -> Bei kleineren Datentypen ist die Referenz "teurer"

weitere Unterscheidung: input only - input and output - output only
*/


//Beispiel aus 19_ValueCopy.cc = Kopie
void f1(int v)
{
    std::cout << "Speicheradresse f1(): " << &v << std::endl;
}

//C-Approach: Pointer
void f2(int *v)
{
    std::cout << "Speicheradresse f2(): " << v << std::endl;
}

//C++-Approach: Reference
void f3(int &v)
{
    std::cout << "Speicheradresse f3(): " << &v << std::endl;
}

int main()
{
    int a = 2;
    std::cout << "Speicheradresse main: " << &a << std::endl;

    f1(a);
    f2(&a); //Funktion erwartet eine Pointervariable -> Speicheradresse von a übergeben
    f3(a);

    return 0;
}
