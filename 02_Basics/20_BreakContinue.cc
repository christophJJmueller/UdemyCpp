#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t sum = 0U;

    do
    {
        std::cout << "\nCurrent Sum: " << sum << " Enter the next value: ";
        std::int32_t input = 0U;
        std::cin >> input;

        if (input < 0)
        {
            std::cout << "Cancelled while loop" << std::endl;
            break; // beendet aktuellen Schleifendurchlauf und komplette Schleife
        }
        else if (input == 10)
            continue;   //beendet aktuellen Schleifendurchlauf

        sum += input;
    } while (sum < 10U);

    return 0;
}
