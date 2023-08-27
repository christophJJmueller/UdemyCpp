#include <iostream>
#include <cstdint>

//Ursprung: 9_ArrayFunction.cc

//Array "zerfällt" (decay) bei der Funktionsübergabe zu einem Pointer, der auf die erste Speicheradresse die Arrays zeigt
// Daher muss die Länge mit übergeben werden!

void print_array(const std::int32_t *array, const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << array[i] << '\n';
    }
}

int main()
{
    const std::int32_t values[]{1, 2, 3};

    //sizeof() liefert die Speichergröße der Variable, nicht die Länge des Arrays
    print_array(values, 3);
    return 0;
}
