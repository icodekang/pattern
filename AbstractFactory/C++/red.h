#ifndef _RED_H_
#define _RED_H_

#include "color.h"

class Red: public Color 
{
public:
    Red() = default;
    virtual void fill();
    virtual ~Red() = default;
};

#endif /* _RED_H_ */