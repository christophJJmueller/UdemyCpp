#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

int main()
{
    // string       const char array
    std::string s = "Hello world!";
    std::cout << s << std::endl;

    const auto index = s.find("Hello");

    if (index != std::string::npos)
    {
        std::cout << "gefunden" << std::endl;
    }
    else
    {
        std::cout << "nicht gefunden" << std::endl;
    }

    std::cout << std::boolalpha << s.empty() << std::endl;  //überprüfen, ob der String leer ist
    std::cout << s.length() << std::endl;                   //überprüfen, wie viele Zeichen der String hat (exkl. '\n')
    //std::cout << s.size() << std::endl;


    return 0;
}
