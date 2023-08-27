#include <iostream>
#include <cstdint>

int main()
{
    auto *p = new std::int32_t{4};  //Allocation
    delete p;                       //De-Allocation

    std::cout << p << std::endl;    //Speicheradresse, auf die p zeigt
    std::cout << *p << std::endl;   //Wert der Speicheradresse, auf die p zeigt

    p = nullptr;                    //Speicheradresse = 0 -> anschließend keine Deref mehr möglich!

    std::cout << p << std::endl;    //Speicheradresse, auf die p zeigt
    //Absturz : std::cout << *p << std::endl;   //Wert der Speicheradresse, auf die p zeigt

    //richtiges Vorgehen
    if (p != nullptr)
    {
        std::cout << p << std::endl;    //Speicheradresse, auf die p zeigt
        std::cout << *p << std::endl;   //Wert der Speicheradresse, auf die p zeigt
    }
    else
        std::cout << "p = nullptr" << std::endl;
    return 0;
}
