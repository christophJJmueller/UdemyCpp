#include <iostream>
#include <cstdint>

//Pointer zeigen auf die Adresse einer andere Variable; Wert der Variable kann gelesen und geschrieben werden
// &: Speicheradresse = "Reference"
// *: Wert der Speicheradresse = "Dereference"

int main()
{
    int num = 5;
    std::cout << "value of num: " << num << std::endl;
    std::cout << "adress of num: " << &num << std::endl; //Speicheradresse über &-Operator

    int *p = &num;  //drei gleichwertige Schreibweisen: int* p; int * p; int *p

    std::cout << "value of *p: " << p << std::endl; // =adress of num
    std::cout << "adress of *p: " << &p << std::endl; // wird normalerweise nicht benötigt
    std::cout << "value of memory adress, that *p points to: " << *p << std::endl;

    //Wert von num auslesen



    return 0;
}
