#include <iostream>
#include <string>

bool is_palindrom(std::string_view text)
{
    auto temp = std::string(text.rbegin(), text.rend());

    std::cout << text << std::endl;
    std::cout << temp << std::endl;
    return (text == temp);
}


int main()
{
    const auto text = std::string{"anna"};
    const auto check = is_palindrom(text);

    std::cout << "Is Palindrom: " << std::boolalpha << check << '\n';

    return 0;
}
