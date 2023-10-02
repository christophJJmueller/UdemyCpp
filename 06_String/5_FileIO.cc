#include <fstream>
#include <iostream>
#include <string>
#include <cstdint>

//WICHTIG:
//1) Prüfen, ob Datei vorhanden ist!
//2) Datei schließen nicht vergessen!
    //ifstream = input file stream
    //ofstream = output file stream

int main()
{
    auto str = std::string{};
    auto text = std::string{};

    /*********/
    /* READ  */
    /*********/
    auto input_file = std::ifstream{}; //File-Objekt

    input_file.open("TextInput.txt");   //Datei öffnen

    if (input_file.is_open())   //gibt true zurück, wenn die Datei geöffnet werden konnte (=vorhanden)
    {
        while (std::getline(input_file, str))
        {
            text += str + '\n';
        }
    }

    input_file.close(); //Datei schließen

    std::cout << text << std::endl;


    const auto search_str = std::string{"eins"};
    const auto replace_str = std::string{"one"};
    const auto search_idx = text.find(search_str);

    if (search_idx != std::string::npos)
    {
        text.replace(search_idx, search_str.size(), replace_str);
    }

    std::cout << "replaced text: " << text << std::endl;

    /*********/
    /* WRITE */
    /*********/

    auto output_file = std::ofstream{}; //File Objekt

    output_file.open("TextOutput.txt"); //Datei öffnen

    if (output_file.is_open())
    {
        output_file << text;        //aktueller Inhalt wird komplett gelöscht und mit neuem Inhalt überschrieben!
    }

    output_file.close();    //Datei schließen


    return 0;
}
