#include <iostream>

#include "Image.h"

int main()
{
    Image my_image1(100, 400);


    std::cout << my_image1.get_width() << std::endl;
    std::cout << my_image1.get_height() << std::endl;
    std::cout << static_cast<int>(my_image1.get_matrix()[0][0]) << std::endl;

    my_image1.set_pixel(50, 50, 255);
    my_image1.set_pixel(50, 51, 255);
    my_image1.set_pixel(51, 50, 255);
    my_image1.set_pixel(51, 51, 255);

    my_image1.save_image("image.bmp");


    return 0;
}
