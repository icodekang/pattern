#ifndef _CRITERIA_SINGLE_H_
#define _CRITERIA_SINGLE_H_

#include "criteria.h"

class CriteriaSingle: public Criteria
{
public:
    CriteriaSingle() = default;
    virtual std::list<Person> meet_criteria(std::list<Person> persons);
    virtual ~CriteriaSingle() = default;
};

#endif /* _CRITERIA_SINGLE_H_ */