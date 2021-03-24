#ifndef _CRITERIA_FEMALE_H_
#define _CRITERIA_FEMALE_H_

#include "criteria.h"

class CriteriaFemale: public Criteria
{
public:
    CriteriaFemale() = default;
    virtual std::list<Person> meet_criteria(std::list<Person> persons);
    virtual ~CriteriaFemale() = default;
};

#endif /* _CRITERIA_FEMALE_H_ */