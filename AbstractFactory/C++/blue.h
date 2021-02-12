#ifndef _BLUE_H_
#define _BLUE_H_

#include "color.h"

class Blue: public Color
{
public:
    Blue() = default;
    virtual void fill();
    virtual ~Blue() = default;
};

#endif /* _BLUE_H_ */