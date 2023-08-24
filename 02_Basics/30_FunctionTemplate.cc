#include <iostream>
#include <cstdint>

//Function Template = Generic Function (Java, C#)
/*
Schablone für Compiler
-> Wird für jeden Input-Datentyp als Vorlage verwendet

ACHTUNG: Alle Datentypen können eingegeben werden!
    -> Beschreibung /** einfügen
    -> Constraint einfügen (Kapitel 10)
*/


/**
 * @brief Compute max of a and b
 *
 * @tparam T should be int or double only!
 * @param a
 * @param b
 * @return
 */
template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    double da = 3.0;
    double db = 1.0;

    std::cout << "Double max: " << max(da, db) << std::endl;

    int ia = 5;
    int ib = 3;
    std::cout << "Int max: " << max(ia, ib) << std::endl;

    return 0;
}
