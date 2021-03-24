#ifndef _CRITERIA_MALE_H_
#define _CRITERIA_MALE_H_

#include "criteria.h"

class CriteriaMale: public Criteria
{
public:
    CriteriaMale() = default;
    virtual std::list<Person> meet_criteria(std::list<Person> persons);
    virtual ~CriteriaMale() = default;
};

#endif /* _CRITERIA_MALE_H_ */