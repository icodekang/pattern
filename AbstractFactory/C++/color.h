#ifndef _COLOR_H_
#define _COLOR_H_

#include <iostream>

class Color
{
public:
    Color() = default;
    virtual void fill() = 0;
    virtual ~Color() = default;
};

#endif  /* _COLOR_H_ */