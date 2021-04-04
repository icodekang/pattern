#ifndef _PROXY_IMAGE_H_
#define _PROXY_IMAGE_H_

#include "real_image.h"

class ProxyImage: public Image 
{
private:
    RealImage *real_image;
    std::string file_name;

public:
    ProxyImage(std::string file_name);
    virtual void display();
    virtual ~ProxyImage();
};

#endif /* _PROXY_IMAGE_H_ */