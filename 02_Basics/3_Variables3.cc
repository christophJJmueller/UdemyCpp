#include <iostream>

// https://en.cppreference.com/w/cpp/language/types

/* Bei 64Bit Systemen:
8 Bit = char
16 Bit = short
32 Bit = int
64 Bit = long long int*/

int main()
{
    //boolean
    //Größe: 1 Byte
    bool my_bool1 = true;
    bool my_bool2 = false;

    //char
    //Größe: 1 Byte = 8 Bit = 2^8 = 256 Werte
    //-128 ... +127
    char my_char1 =-65;
    char my_char2 = 105;

    //short
    //Größe: 2 Byte = 16 Bit = 2^16 = 65536 Werte
    //-32768 ... +32767
    short my_short1 = -22744;
    short my_short2 = 15165;

    //integer (=long)
    //Größe: 4 Byte = 32 Bit = 2^32 = 4.294.967.296 Werte
    //-2147483648 ... +2147483647
    int my_int1 = 100'000;

    //long long
    //Größe: 8 Byte = 64 Bit = 2^64 = 18.446.744.073.709.551.616 Werte
    //-9223372036854775808 ... +9223372036854775807
    long long my_ll = 5'000'000'000;

    //float
    //Größe: 4 Byte = 32 Bit = 2^32 = 4.294.967.296 Werte
    // -/+ 3.403e+38
    float my_float = 3.14;

    //double
    //Größe: 8 Byte = 64 Bit = ...
    // -/+ 1.798e+308
    double my_double = 3.14;

    return 0;
}
