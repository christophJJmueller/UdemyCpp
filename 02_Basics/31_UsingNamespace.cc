#include <iostream>
#include <cstdint>
#include <algorithm>

//using namespace std;
/*
-> std:: muss nicht mehr eingegeben werden
-> ACHTUNG: unbewusstes Function Overloading / ein Funktionsname doppelt belegt

-> NIEMALS VERWENDEN!
*/

int main()
{
    int a = 5;
    int b = 2;

    int res = std::min(a,b);
    std::cout << res << std::endl;

    return 0;
}
