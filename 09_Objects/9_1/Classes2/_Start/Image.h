#include <cstdint>
#include <vector>

using GrayscaleMatrix = std::vector<std::vector<uint8_t>>;

class Image
{
public:
    // Constructor: alle Membervariablen beim Aufruf des Constructors mit sinnvollen Werten initialisieren!
    // -> Class Initializer List! REIHENFOLGE IN PRIVATE BEACHTEN!
    Image(const std::uint32_t width, const std::uint32_t height);

    // Destructor
    ~Image();

private:
    std::uint32_t m_width;
    std::uint32_t m_height;
    GrayscaleMatrix m_matrix;
};
