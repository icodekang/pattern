#ifndef _AND_CRITERIA_H_
#define _AND_CRITERIA_H_

#include "criteria.h"

class AndCriteria: public Criteria
{
private:
    Criteria *criteria;
    Criteria *other_criteria;

public:
    AndCriteria(Criteria *criteria, Criteria *other_criteria);
    virtual std::list<Person> meet_criteria(std::list<Person> persons);
    virtual ~AndCriteria() = default;
};

#endif /* _AND_CRITERIA_H_ */