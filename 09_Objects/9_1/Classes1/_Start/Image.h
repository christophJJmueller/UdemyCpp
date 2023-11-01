#include <cstdint>

class Image
{
    //Keywords: public, private, protected

public:
    // Constructor (kein Return-Type!)
    Image(const std::uint32_t width, const std::uint32_t height);

    // Destructor (immer ~ am Anfang)
    ~Image();


private: //Klassenattribute m_ = Membervariable
    std::uint32_t m_width;
    std::uint32_t m_height;

};
