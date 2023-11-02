#include <iostream>
#include "Agent.h"

int main()
{
    std::cout << "Line 6\n";
    {
        auto agent1 = Agent{"A1", 0U};
    }

    std::cout << "Line 11\n";

    {
        auto player1 = Player{"P1", 1};
    }

    std::cout << "Line 17\n";

    {
        auto npct1 = NPC{"N1", 2U};
    }

    std::cout << "Line 23\n";


    return 0;
}
