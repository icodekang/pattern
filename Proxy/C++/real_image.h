#ifndef _REAL_IMAGE_H_
#define _REAL_IMAGE_H_

#include "image.h"

class RealImage: public Image
{
private:
    std::string file_name;
    void load_disk(std::string file_name);

public:
    RealImage(std::string file_name);
    virtual void display();
    virtual ~RealImage() = default;
};

#endif /* _REAL_IMAGE_H_ */