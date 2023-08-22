#include <iostream>
#include <cstdint>

int main()
{

    int age1 = 28;
    int age2 = 56;

    // Variante if-else
    int older_age;

    if (age1 > age2)
        older_age = age1;
    else
        older_age = age2;

    // Variante Ternary Operator
    //               BOOL EXPR   ? TRUE : FALSE;
    int older_age2 = age1 > age2 ? age1 : age2;

    return 0;
}
