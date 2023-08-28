#include <iostream>
#include <cstdint>


//Beispiel aus 19_ValueCopy.cc = Kopie
void copy(int v)    //Input, but modifiable
{
    v *= 2;
    std::cout << "Speicheradresse copy(): " << &v << std::endl;
}

void copy_const(const int v) //Input only because of const
{
    std::cout << "Speicheradresse copy_const(): " << &v << std::endl;
}

void reference_input(const int &v) //Input only because of const
{
    std::cout << "Speicheradresse reference_input(): " << &v << std::endl;
}

//C++-Approach: Reference
void reference_in_out(int &v)
{
    v *= 2;
    std::cout << "Speicheradresse reference_in_out(): " << &v << std::endl;
}

int main()
{
    int a = 2;
    std::cout << "Speicheradresse main: " << &a << std::endl;
    std::cout << "Wert Variable a: " << a << std::endl;
    copy(a);
    copy_const(a);
    reference_input(a);
    reference_in_out(a);    //Änderung aus der Funktion wird nach außen übernommen
    std::cout << "Wert Variable a: " << a << std::endl;

    return 0;
}
