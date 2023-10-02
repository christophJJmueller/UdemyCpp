#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

int main()
{
    const auto text = std::string{"Eins, Zwei, Drei"};

    auto text2 = text;
    std::cout << "Text2: " << text2 << std::endl;
    text2.clear();
    std::cout << "Text2: " << text2 << std::endl;

    //+-Operator funktioniert nur für char-array oder std::string-Objekte
    auto text3 = text + ", Vier";
    std::cout << "Text3: " << text3 << std::endl;

    //.append() funktioniert auch für einzene Buchstaben bzw. Initialiser List
    auto text4 = text3;
    text4.append({' ', ',', 'F', 'u', 'e', 'n', 'f'});
    std::cout << "Text4: " << text4 << std::endl;

    //Vergleichen
    auto s1 = std::string{"Jann"};
    auto s2 = std::string{"Jan"};

    std::cout << "s1 == s2? " << std::boolalpha << (s1 == s2) << std::endl;

    const auto compared_str = s1.compare(s2); //0 = beide gleich; >0 = s1 > s2 bzw. s1 hat größere Werte auf Ascii Tabelle; <0 s1 < s2
    std::cout << "s1.compared(s2): " << compared_str << std::endl;

    //Replace
    const auto search_str = "nn";
    const auto idx = s1.find(search_str);
    if (idx != std::string::npos)
    {
        s1.replace(idx, 2, "n");
    }
    std::cout << "Replace: " << s1 << std::endl;

    //Substring
    const auto sub_str = text4.substr(6, 4);
    std::cout << "sub_str: " << sub_str << std::endl;



    return 0;
}
