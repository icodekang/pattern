#ifndef _CRITERIA_H_
#define _CRITERIA_H_

#include <list>
#include "person.h"

class Criteria
{
public:
    Criteria() = default;
    virtual std::list<Person> meet_criteria(std::list<Person> persons) = 0;
    virtual ~Criteria() = default;
};

#endif /* _CRITERIA_H_ */