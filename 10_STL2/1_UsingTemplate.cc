#include <iostream>
#include <map>
#include <vector>

// using ui32 = unsigned int;

//folgendes Beispiel geht nicht, weil typedef
//aus C kommt und keine generische Programmierung unterstützt
// template <typename T>
// typedef std::map<int, std::vector<T>> MapData;

//folgendes Beispiel besser; immer using bevorzugen!
template <typename T>
using MapData = std::map<int, std::vector<T>>;

int main()
{
    MapData<double> my_accounts;

    return 0;
}
