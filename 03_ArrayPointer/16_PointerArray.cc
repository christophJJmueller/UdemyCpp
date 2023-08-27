#include <iostream>
#include <cstdint>

int main()
{
    auto array_size = std::size_t{10};

    //HEAP Alloc
    auto *arr = new std::int32_t[array_size]; //Pointer *arr zeigt auf die Speicheradresse von Index 0 des Arrays (10x std::int32_t)

    std::cout << "Deref: " << *arr << ", Ref: " << arr << " pointer adress: " << &arr << std::endl;

    for (std::size_t i = 0; i < array_size; i++)
    {
        arr[i] = i;     //Warum nicht *arr[i]? Siehe Video 91 "Array Index Operator" bzw. 18_PointerIndexOperator.cc
    }

    // ...

    for (std::size_t i = 0; i < array_size; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    std::cout << "Deref: " << *arr << ", Ref: " << arr << " pointer adress: " << &arr << std::endl;

    //Pointer Arithmetik (=verschieben)
    *arr = *(arr+1);
    std::cout << "Deref: " << *arr << ", Ref: " << arr << " pointer adress: " << &arr << std::endl;


    //HEAP De-Alloc
    delete[] arr;


    return 0;
}
