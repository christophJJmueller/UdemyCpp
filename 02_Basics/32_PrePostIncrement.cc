#include <iostream>
#include <cstdint>

//Post Increment: i++ -> wird erst nach Ausführen der Zeile durchgeführt
//Pre Increment:  ++i -> wird vor dem Ausführen der Zeile ausgeführt

void func(int val)
{
    std::cout << "Inner val: " << val << std::endl;
}

int main()
{
    int value = 0;
    std::cout << "Outer val: " << value << std::endl;
    func(value++);
    std::cout << "Outer val: " << value << std::endl;

    value = 0;
    std::cout << "Outer val: " << value << std::endl;
    func(++value);
    std::cout << "Outer val: " << value << std::endl;

    return 0;
}
