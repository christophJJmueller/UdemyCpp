#include <iostream>
#include <cstdint>

//Bei Parameterübergabe an Funktionen wird nur der Wert übergeben, d.h. es wird eine Kopie der Variable erstellt.

void f(int v)
{
    std::cout << "Speicheradresse f(): " << &v << std::endl;
}

int main()
{
    int a = 2;
    std::cout << "Speicheradresse main: " << &a << std::endl;

    f(a);

    return 0;
}
