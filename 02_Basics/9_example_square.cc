#include <iostream>
#include <cstdint>

//Task
/*
1. User Input: side length of a square
2. Compute perimeter and area of square
3. Print results in Terminal */

int main()
{
    //Variablen
    float side_length;
    float perimeter;
    float area;

    //User Input
    std::cout << "Please enter the side length of the square: " << std::endl;
    std::cin >> side_length;

    //Calculation
    perimeter = 4 * side_length;
    area = side_length * side_length;

    //Console Output
    std::cout << "The perimeter of the square is: " << perimeter << std::endl;
    std::cout << "The area is: " << area << std::endl;



    return 0;
}
