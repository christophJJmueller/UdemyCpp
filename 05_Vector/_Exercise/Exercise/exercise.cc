#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

// Exercise 2
VectorT max_row_values(MatrixT &matrix)
{
    auto max_row_val = VectorT(3, 0.0);

    for (std::size_t i = 0; auto col : matrix)
    {
        std::sort(col.begin(), col.end());
        max_row_val[i] = col.back();
        i++;
    }

    return max_row_val;
}

// Exercise 3
ValueT sort_and_max(VectorT &vec)
{
    //auto max_vec_val = 0.0;

    std::sort(vec.begin(), vec.end());

    return vec.back();
}
