#include <iostream>
#include <filesystem>

//Library, die abhängig vom Filesystem existiert, und Details zu Dateien und Ordnerstrukturen zur Verfügung stellt

namespace fs = std::filesystem;

int main()
{
    fs::path current_path = fs::current_path();
    fs::path current_file_path =fs::current_path();
    current_file_path /= "10_FileSystem2.cc";

    //Welche Dateien / Unterordner liegen in current_path?
    for (auto it = fs::directory_iterator(current_path); it != fs::directory_iterator{}; it++)
    {
        std::cout << *it << std::endl;
    }

    //Neuen Ordner erstellen
    fs::path new_directory_path;
    new_directory_path = fs::current_path();
    new_directory_path /= "test";

    if (!fs::exists(new_directory_path)) //nur erstellen, wenn der Ordner noch nicht existiert
    {
        fs::create_directory(new_directory_path);
    }

    //Datei kopieren
    fs::path new_file_path;
    new_file_path /= new_directory_path;
    new_file_path /= "FileSystemCopy.cc";

    if(!fs::exists(new_file_path))
    {
        fs::copy_file(current_file_path, new_file_path);
    }

    return 0;
}
