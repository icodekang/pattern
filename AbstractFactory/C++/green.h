#ifndef _GREEN_H_
#define _GREEN_H_

#include "color.h"

class Green: public Color
{
public:
    Green() = default;
    virtual void fill();
    virtual ~Green() = default;
};

#endif /* _GREEN_H_ */