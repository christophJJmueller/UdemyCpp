#include <iostream>
#include <cstdint>

//Output the length of the char array (String)
//The '\0' is not included in the lenght value

int main()
{
    char array1[] = "Hello World!";

    std::uint32_t i = 0;
    while (array1[i] != '\0')
    {
        i++;
    }
    std::cout << "Lenght of char array: " << i << std::endl;

    return 0;
}
