#include <iostream>
#include <cstdint>

//enum = enumeration

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    PermissionLevel permission_level_christoph = PermissionLevel::STUDENT;
    PermissionLevel test = PermissionLevel(3); //Zuweisung über Zahl möglich -> über Klartext verständlicher

    std::cout << permission_level_jan << std::endl;         //int-Wert der enumeration wird ausgegeben
    std::cout << permission_level_christoph << std::endl;
    std::cout << test << std::endl;

    return 0;
}
