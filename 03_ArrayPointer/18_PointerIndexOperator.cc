#include <iostream>
#include <cstdint>

//Fragestellung: Warum können wir in der Funktion "print_array" mit dem []-Operator auf das Array zugreifen, obwohl eigentlich ein Pointer (*array) übergeben wird?
//siehe auch 16_PointerArray.cc

void print_array(const std::int32_t *array, const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << array[i] << '\n';
    }
}

void print_array2(const std::int32_t *array, const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << *(array + i) << '\n'; //[]-Operator ist "bessere" Schreibweise für Pointer-Arithmetik (=Pointer verschieben)
    }
}

int main()
{
    constexpr std::size_t arr_len = 3U;
    const std::int32_t values[]{1, 2, 3};

    //sizeof() liefert die Speichergröße der Variable, nicht die Länge des Arrays
    print_array(values, arr_len);
    print_array2(values, arr_len);
    return 0;
}
