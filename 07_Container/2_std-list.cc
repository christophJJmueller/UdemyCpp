#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <list>

//std::list
//doubly-linked -> vorwärts- und rückwärts iterieren möglich
//ABER: nicht in zusammehängendem Speicher abgelegt -> kein Index-Operator [] -> schwieriger Elementezugriff
    //Hier: Jeder "Knoten" (Node) kennt seinen Wert und die Speicheradressen der Nachbarn -> speicherintensiv
//VORTEIL: Werte, die nicht vorne oder am Ende liegen, können sehr einfach hinzugefügt / entfernt werden

int main()
{
    const auto vec = std::vector<int>{1,2,3};
    const auto lst = std::list<int>{1,2,3};

    //Gemeinsamkeiten
    std::cout << vec.size() << std::endl;
    std::cout << lst.size() << std::endl;

    std::cout << vec.empty() << std::endl;
    std::cout << lst.empty() << std::endl;

    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    //for-each-Schleife
    for (const auto val : vec)
    {
        std::cout << val << " ";
    }
    for (const auto val : lst)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;


    //Unterschiede
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << vec[i] << std::endl;
    }

    auto it_lst = lst.begin();
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << *it_lst << " ";
        it_lst++;
    }

    //push_front()
    //pop_front()


    std::cout << std::endl;


    return 0;
}
