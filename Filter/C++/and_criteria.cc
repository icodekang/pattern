#include "and_criteria.h"

AndCriteria::AndCriteria(Criteria *criteria, Criteria *other_criteria): criteria(criteria), other_criteria(other_criteria)
{

}

std::list<Person> AndCriteria::meet_criteria(std::list<Person> persons)
{
    std::list<Person> first_criteria_persons  = criteria->meet_criteria(persons);
    return other_criteria->meet_criteria(first_criteria_persons);
}