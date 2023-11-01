#include <iostream>

#include "Image.h"

int main()
{
    std::cout << "Line 7\n";
    {
        Image my_image1(10, 5); //10x Zeilenvektor mit 5 Werten
    }
    std::cout << "Line 11\n";

    return 0;
}
