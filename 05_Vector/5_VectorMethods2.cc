#include <iostream>
#include <cstdint>
#include <vector>

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


int main()
{
    auto myvector = std::vector<int>{1,2,3,4,5};
    print_vector(myvector);
    print_vector_info(myvector);

    //ELEMENT ACCESS

    //data gibt einen Pointer zum ersten Wert des Vektors zurück
    auto p = myvector.data();
    std::cout << *p << std::endl;
    p += 2;
    std::cout << *p << std::endl;

    //front gibt eine Referenz des letzten Elements des Vektors zurück
    auto f1 = myvector.front();
    auto &f2 = myvector.front();
    std::cout << "f1: " << f1 << std::endl;
    std::cout << "f2: " << f2 << std::endl;
    //f1 ist Kopie des ersten Werts -> Vektor unverändert
    f1= -1;
    std::cout << "f1: " << f1 << std::endl;
    std::cout << myvector[0] << std::endl;
    //f2 ist Referenz des ersten Werts -> Vektor verändert
    f2= -1;
    std::cout << "f2: " << f2 << std::endl;
    std::cout << myvector[0] << std::endl;

    //back gibt eine Referenz des letzten Elements des Vektors zurück
    //front gibt eine Referenz zum ersten Element des Vektors zurück
    auto &b = myvector.back();
    std::cout << "b: " << b << std::endl;
    //f1 ist Kopie des ersten Werts -> Vektor unverändert
    b= -99;
    std::cout << "b: " << b << std::endl;
    std::cout << myvector[myvector.size() - 1] << std::endl;

    std::cout << std::endl;

    //ITERATOREN

    //begin und end geben einen Iterator zum ersten bzw. letzten Element zurück
    //[begin, end) -> end-Iterator ist exklusive!
    auto begin = myvector.begin();
    auto end = myvector.end();

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;

    ++begin;
    --end;

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;

    for (auto it = myvector.begin(); it != myvector.end(); it++)
    {
        std::cout << *it << std::endl;
    }


    return 0;
}
