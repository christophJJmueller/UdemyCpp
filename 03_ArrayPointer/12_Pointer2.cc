#include <iostream>
#include <cstdint>

//Pointer werden oft genutzt, um Speicher auf dem HEAP zu reservieren (allocieren)

//Beispiel: Speicher für einen Int-Wert reservieren

/*
Pointer liegt auf dem Stack & zeigt auf den reservierten Speicher auf dem HEAP
*/

int main()
{
    //HEAP Allocation
    int *p = new int{4}; //4Byte = 32 Bit Speicher werden auf dem HEAP für die Variable 4 reserviert

    std::cout << "memory adress of *p: " << &p << std::endl;
    std::cout << "memory adress of pointed value: " << p << std::endl;
    std::cout << "value of memory adress that p points to: " << *p << std::endl;


    *p = 1234;

    std::cout << "memory adress of *p: " << &p << std::endl;
    std::cout << "memory adress of pointed value: " << p << std::endl;
    std::cout << "value of memory adress that p points to: " << *p << std::endl;

    //HEAP De-Allocation -> Speicher, der in Zeile 15 allociert wird, muss wieder freigegeben werden!
    delete p;   //Speicher, auf den der Pointer zeigt, wird freigegeben

    std::cout << "memory adress of *p: " << &p << std::endl;
    std::cout << "memory adress of pointed value: " << p << std::endl;
    std::cout << "value of memory adress that p points to: " << *p << std::endl;

    return 0;
}
