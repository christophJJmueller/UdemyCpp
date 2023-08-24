#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for (std::int32_t i = 0; i < I; i++)
    {
        for (std::int32_t j = 0; j < J; j++)
        {
            if ((i+j)%2 == 0)
                std::cout << "i: " << i << ", j: " << j << " := Gerade!" << std::endl;
            else
                std::cout << "i: " << i << ", j: " << j << " := Ungerade!" << std::endl;

        }

    }

}
