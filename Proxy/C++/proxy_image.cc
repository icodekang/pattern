#include "proxy_image.h"

ProxyImage::ProxyImage(std::string file_name): file_name(file_name)
{

}

void ProxyImage::display()
{
    if (real_image == nullptr) {
        real_image = new RealImage(file_name);
    }
    real_image->display();
}

ProxyImage::~ProxyImage()
{
    if (real_image) {
        delete real_image;
        real_image = nullptr;
    }
}