#include "criteria_female.h"

std::list<Person> CriteriaFemale::meet_criteria(std::list<Person> persons)
{
    std::list<Person> female_persons;
    for (Person person: persons) {
        if (!person.get_gender().compare("female")) {
            female_persons.push_back(person);
        }
    }
    return female_persons;
}