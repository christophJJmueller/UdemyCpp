#include <iostream>
#include <cstdint>

//eindimensionales Array = Vektor
//multidimensionales Array = Matrix

int main()
{
    //1D Array = Vektor
    int my_array1[3] = {1, 2, 3};

    //2D Array = Matrix
    //Number of rows = 3, number of collumns = 2

    int my_matrix1[3][2] = {1,2,3,4,5,6};
    int my_matrix2[3][2] = {{1,2}, {3,4}, {5,6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << my_matrix2[i][j] << std::endl;
        }

    }



    return 0;
}
