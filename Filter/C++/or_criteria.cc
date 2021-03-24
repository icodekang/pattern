#include "or_criteria.h"

OrCriteria::OrCriteria(Criteria *criteria, Criteria *other_criteria): criteria(criteria), other_criteria(other_criteria)
{

}

std::list<Person> OrCriteria::meet_criteria(std::list<Person> persons)
{
    std::list<Person> first_criteria_items = criteria->meet_criteria(persons);
    std::list<Person> other_criteria_items = other_criteria->meet_criteria(persons);

    for (Person person: other_criteria_items) {
        if (std::find(first_criteria_items.begin(), first_criteria_items.end(), person) == first_criteria_items.end()) {
            first_criteria_items.push_back(person);
        }
    }

    return first_criteria_items;
}