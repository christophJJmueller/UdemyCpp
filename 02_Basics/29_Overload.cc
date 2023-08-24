#include <iostream>
#include <cstdint>

//Funktion: 2 Zahlen einlesen -> Maximum zurückgeben

//ACHTUNG:Datentyp unklar -> implizite Konvertierung!

/*
LÖSUNG: Funktionsüberladung
https://learn.microsoft.com/en-us/cpp/cpp/function-overloading?view=msvc-170

mehrere Funktionen mit gleichem Namen, bei denen sich mind. ein Datentyp in der Parameterliste unterscheidet

-> NUR VERWENDEN; WENN KEINE ANDERE MÖGLICHKEIT <-

    -> BESSER FUNCTION TEMPLATES <-

*/

double max(double a, double b)
{
    return a > b ? a : b;
}

float max(float a, float b)
{
    return a > b ? a : b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

char max(char a, char b)
{
    return a > b ? a : b;
}

int main()
{
    double d_a = 3.0;
    double d_b = 1.0;

    std::cout << max(d_a, d_b) << std::endl;

    return 0;
}
