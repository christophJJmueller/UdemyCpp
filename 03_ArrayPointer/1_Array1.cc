#include <iostream>
#include <cstdint>

//Array hat eine konstante Länge -> Wird zur Compiletime fest definiert!

//Syntax:
//dataType varName[numElements];

int main()
{
    // Index                  0   1   2   3   4
    std::int32_t array1[5] = {10, 11, 12, 13, 14};

    //Index-Operator zum Auslesen der Werte
    std::cout << array1[0] << '\n';
    std::cout << array1[1] << '\n';
    std::cout << array1[2] << '\n';
    std::cout << array1[3] << '\n';
    std::cout << array1[4] << '\n';

    //numElements kann leer bleiben, wenn zeitgleich zur Deklaration auch die Initialisierung erfolgt
    std::int32_t array2[] = {20, 21, 22}; //"braced initialization"


    std::int32_t array3[3];
    array3[0] = 30;
    array3[1] = 31;
    array3[2] = 32;

    return 0;
}
