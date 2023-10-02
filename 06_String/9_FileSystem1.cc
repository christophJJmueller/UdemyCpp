#include <iostream>
#include <filesystem>

//Library, die abhängig vom Filesystem existiert, und Details zu Dateien und Ordnerstrukturen zur Verfügung stellt

namespace fs = std::filesystem;

int main()
{
    fs::path workspace_path = "C:/Users/much1/Documents/ComputerVision/UdemyCPP/UdemyCpp";
    fs::path chapter_path;

    chapter_path = workspace_path;
    chapter_path /= "06_String";

    std::cout << workspace_path << std::endl;
    std::cout << chapter_path << std::endl;

    fs::path current_file_path =fs::current_path();

    std::cout << current_file_path << std::endl;

    current_file_path /= "9_FileSystem1.cc";

    std::cout << current_file_path << std::endl;


    //https://en.cppreference.com/w/cpp/filesystem/path

    std::cout << "relative path: " << current_file_path.relative_path() << std::endl;
    std::cout << "parent path: " << current_file_path.parent_path() << std::endl;
    std::cout << "file name: " << current_file_path.filename() << std::endl;
    std::cout << "stem: " << current_file_path.stem() << std::endl;
    std::cout << "extension: " << current_file_path.extension() << std::endl;

    //path existing?
    std::cout << "path existing: " << fs::exists(current_file_path) << std::endl;

    //path = file?
    std::cout << "file?: " << fs::is_regular_file(current_file_path) << std::endl;

    //path = folder?
    std::cout << "folder?: " << fs::is_directory(current_file_path) << std::endl;


    return 0;
}
