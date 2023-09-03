#include <iostream>
#include <cstdint>

//Switch Abfrage immer dann, wenn mehrere Fälle abgefragt werden sollen
/*
if (permission_level_jan == INSTRUCTOR)
    ...
else if (permission_level_jan == ADMIN)
    ...
else if (permission_level_jan == STUDENT)
    ...
else
    ...

-> Besser: Switch / Case!
*/

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

    switch (permission_level_christoph)
    {
    case PermissionLevel::STUDENT:
        std::cout << "Hello Student!" << std::endl;
        break;  //BREAK Keyword wichtig -> ansonsten "Fall through" (= alle weiteren Fälle werden mit ausgeführt)
    case PermissionLevel::TUTOR:
        std::cout << "Hello TUTOR!" << std::endl;
        break;
    case PermissionLevel::INSTRUCTOR:
        std::cout << "Hello INSTRUCTOR!" << std::endl;
        break;
    case PermissionLevel::ADMIN:
        std::cout << "Hello ADMIN!" << std::endl;
        break;
    default:
        std::cout << "UNKNOWN STATE!" << std::endl;
        break;
    }

    return 0;
}
