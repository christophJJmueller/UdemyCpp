#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a;
    int *p_e = &b;
    int *p_f = &c;

    *p_d = (2 * (*p_e)) + (3 * (*p_f)); // Deref von a = 2*2 + 3*3 = 13
    p_d = &b;                           // p_d zeigt auf b
    p_f = &a;                           // p_f zeigt auf a

    *p_e = *p_d + *p_f;                 // Deref von b = b + a = 15

    std::cout << a << '\n';     //Ausgabe: 13
    std::cout << *p_d << '\n';  //Ausgabe: Deref von b = 15
    std::cout << *p_e << '\n';  //Ausgabe: Deref von b = 15
    std::cout << *p_f << '\n';  //Ausgabe: Deref von a = 13

    return 0;
}
