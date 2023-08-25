#include <iostream>
#include <cstdint>

// 1a. C++: static_cast<newDtype>(varName)
// 1b. C:   (newDtype)(varName)
// Easier to read, less prone to errors

//https://en.cppreference.com/w/cpp/language/static_cast

int main()
{
    int a = 12;
    float b = static_cast<float>(a); //explizites Castin
    //float b = a; // NIEMALS implizites Casting!

    return 0;
}
