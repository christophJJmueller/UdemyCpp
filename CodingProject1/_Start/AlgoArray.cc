#include <cmath>
#include <cstdlib>

#include "AlgoArray.h"
#include "DynArray.h"

double sum(const DynamicArray &dynamic_array)
{
    auto array_sum = 0.0;

    for (std::size_t i = 0; i < dynamic_array.m_length; i++)
    {
        array_sum += dynamic_array.m_data[i];
    }

    return array_sum;

}

double mean(const DynamicArray &dynamic_array)
{
    return sum(dynamic_array) / static_cast<double>(dynamic_array.m_length);
}

double median(const DynamicArray &dynamic_array)
{
    //auto array_median = 0.0;
    bool swapped = false;
    auto array_length = dynamic_array.m_length;
    auto temp = 0.0;

    //Werte aufsteigend sortieren: Bubblesort
    do
    {
        swapped = false;
        for (std::size_t i = 0; i < array_length-1; i++)
        {
            if (dynamic_array.m_data[i] > dynamic_array.m_data[i+1])
            {
                temp = dynamic_array.m_data[i];
                dynamic_array.m_data[i] = dynamic_array.m_data[i+1];
                dynamic_array.m_data[i+1] = temp;
                swapped = true;
            }
        }
        array_length--;

    } while (swapped);


    //Anzahl Elemente?
    if (array_length / 2 == 0)
    {
        return ((dynamic_array.m_data[array_length/2] + dynamic_array.m_data[(array_length/2)-1]) / 2);
    }
    else
    {
        return dynamic_array.m_data[array_length/2];
    }

}
