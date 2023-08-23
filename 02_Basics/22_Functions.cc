#include <iostream>
#include <cstdint>

//Beispiel: 3x eine Zahl vom Benutzer einlesen

//Return Type  F-Name  (Parameter)
std::int32_t user_input()
{
    std::int32_t number = 0;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    return number;
}

int main()
{
    //ohne Funktion
    std::int32_t number1 = 0;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number1;

    std::int32_t number2 = 0;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number2;

    std::int32_t number3 = 0;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number3;


    //mit Funktion

    std::int32_t n1 = user_input();
    std::int32_t n2 = user_input();
    std::int32_t n3 = user_input();

    //Ausgabe
    std::cout << n1 << n2 << n3 <<std::endl;


    return 0;
}
