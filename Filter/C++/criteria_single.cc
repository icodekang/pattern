#include "criteria_single.h"

std::list<Person> CriteriaSingle::meet_criteria(std::list<Person> persons)
{
    std::list<Person> single_persons;
    for (Person person: persons) {
        if (!person.get_marital_status().compare("single")) {
            single_persons.push_back(person);
        }
    }
    return single_persons;
}