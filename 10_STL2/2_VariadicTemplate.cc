#include <iostream>
#include <string>

//Funktion bis C++ 2017

//Variadic Arguments:
/* Anzahl der Argumente, die an eine Funktion übergeben
werden, ist unbekannt*/
//... = Variadic

//immer Überladung für Sonderfall "Ein Argument" definieren!

template <typename T>
T concat(T first)
{
    return first;
}

//rekursive Funktion
template <typename T, typename... Args>
T concat(T first, Args... args)
{
    return first + concat(args...);
}

int main()
{
    const auto s1 = std::string{"Ha"};
    const auto s2 = std::string{"ll"};
    const auto s3 = std::string{"o"};

    // 1. Durchlauf: first=s1, ...args=[s2, s3]
    // 2. Durchlauf: first=s2, ...args=[s3]
    // 3. Durchlauf: first=s3, ...args=[]
    std::cout << concat(s1, s2, s3) << '\n';

    std::cout << concat(2, 3, 4) << '\n';

    return 0;
}
