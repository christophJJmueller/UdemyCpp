#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

//Element Access (front, back, data) & Iterators (begin, end, rbegin, rend)

void print_vector(const std::vector<int> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;

}

void print_vector_info(const std::vector<int> &vec)
{
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capa: " << vec.capacity() << std::endl;
    std::cout << "Empty?: " << std::boolalpha << vec.empty() << std::endl;
    std::cout << std::endl;
}

bool sort_ascending(const int i, const int j)
{
    return i < j;
}

bool sort_descending(const int i, const int j)
{
    return i > j;
}

int main()
{
    auto myvector = std::vector<int>{-1, 20, 13, -8, 5};
    print_vector(myvector);
    print_vector_info(myvector);

    //default = aufsteigend sortieren
    std::sort(myvector.begin(), myvector.end());
    print_vector(myvector);

    //eigene Sortierregeln
    /*
    1) eigene Funktion erstellen
        Rückgabewert: bool
        Parameter: gleicher Datentyp wie Vektor, der sortiert werden soll

    2) Funktion als Parameter an std::sort übergeben
    */

   //aufsteigend
    std::sort(myvector.begin(), myvector.end(), sort_ascending);
    print_vector(myvector);

   //absteigend
    std::sort(myvector.begin(), myvector.end(), sort_descending);
    print_vector(myvector);

    return 0;
}
