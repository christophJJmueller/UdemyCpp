#include <cstdlib>
#include <iostream>

// argc: argument count
    //default: 1 (=exe)
// argv: argument values
    //**argv = *argv[] = 2D-Array
        //1. Dimension: Anzahl Argumente = Anzahl Zeilen
        //2. Dimension: so viele Einträge wie das jeweilige Argument lang ist
    //Beispiel: gcc --version
        //1. gcc = 3
        //2. --version = 9

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << '\n'; //alle Argumente werden standardmäßig als String ausgegeben
    }

    if (argc > 1)
    {
        int arg_value = std::atoi(argv[1]); //https://en.cppreference.com/w/cpp/string/byte/atoi
        std::cout << arg_value << '\n';
    }

    return 0;
}
