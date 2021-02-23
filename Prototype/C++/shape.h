#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <iostream>

class Shape
{
private:
    std::string id;

protected:
    std::string type;

public:
    Shape() = default;
    std::string get_type();
    std::string get_id();
    void set_id(std::string id);
    virtual Shape *clone() = 0;
    virtual void draw() = 0;
    virtual ~Shape() = default; 
};

#endif /* _SHAPE_H_ */