#ifndef _IMAGE_H_
#define _IMAGE_H_

#include <iostream>

class Image
{
public:
    Image() = default;
    virtual void display() = 0;
    virtual ~Image() = default;
};

#endif /* _IMAGE_H_ */