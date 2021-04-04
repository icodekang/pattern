#include "real_image.h"

RealImage::RealImage(std::string file_name): file_name(file_name)
{

}

void RealImage::display()
{
    std::cout << "displaying " << file_name << std::endl;
}

void RealImage::load_disk(std::string file_name)
{
    std::cout << "loading " << file_name << std::endl;
}