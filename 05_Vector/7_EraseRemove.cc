#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>


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

bool is_negative(const int i)
{
    return i < 0;
}

int main()
{
    auto myvector = std::vector<int>{-1, 20, 13, -8, 5};
    print_vector(myvector);
    print_vector_info(myvector);

    //gilt nur für C++ vor 2020!
    //std::remove und vector.erase()

    /*
    1) Werte, die gelöscht werden sollen, müssen an das Ende des Vektors geschoben werden
        std::remove -> gut für einzelne Zahlen -> gibt Iterator auf das erste Element zurück, dass ans Ende geschoben wurde
        std::remove_if -> gut für logische Abfragen ->
    2) vector.erase(Iterator von std::remote, vector.end())
    */

    auto remove_iterator = std::remove(myvector.begin(), myvector.end(), -1);
    myvector.erase(remove_iterator, myvector.end());
    print_vector(myvector);

    auto remove_if = std::remove_if(myvector.begin(), myvector.end(), is_negative);
    myvector.erase(remove_if, myvector.end());
    print_vector(myvector);

    return 0;
}
