#include <iostream>
#include <cstdint>
#include <string>

//Namen im enum werden global reserviert -> können nicht doppelt belegt werden
// -> BESSER: enum class -> Namen werden privat im enum verwendet -> muss bei Zuweisung mit angegeben werden

enum class PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};

/* enum ServerGroup
{
    USER,
    ADMIN, //FEHLERMELDUNG "PREVIOUS DECLARATION"
}; */

enum class ServerGroup
{
    USER,
    ADMIN, //FEHLERMELDUNG "PREVIOUS DECLARATION"
};

struct UserData
{
    std::string name;
    std::uint32_t id;
    PermissionLevel permission_level;
};

void print_user(UserData &user)
{
    std::cout << user.name << "has the ID " << user.id << " and is a ";

    switch (user.permission_level)
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
}


int main()
{
    UserData Jan = {"Jan", 1234, PermissionLevel::INSTRUCTOR};
    print_user(Jan);
    UserData Christoph = {"Christoph", 5678, PermissionLevel::STUDENT};
    print_user(Christoph);

    return 0;
}
