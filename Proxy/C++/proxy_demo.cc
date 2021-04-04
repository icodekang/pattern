#include "proxy_image.h"

int main()
{
    Image *image = new ProxyImage("test.jpg");
    image->display();
    std::cout << "----------------" << std::endl;
    image->display();
    return 0;
}