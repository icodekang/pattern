#ifndef _OR_CRITERIA_H_
#define _OR_CRITERIA_H_

#include <algorithm>
#include "criteria.h"

class OrCriteria: public Criteria 
{
private:
    Criteria *criteria;
    Criteria *other_criteria;

public:
    OrCriteria(Criteria *criteria, Criteria *other_criteria);
    virtual std::list<Person> meet_criteria(std::list<Person> persons);
    virtual ~OrCriteria() = default;
};

#endif /* _OR_CRITERIA_H_ */