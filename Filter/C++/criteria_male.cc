#include "criteria_male.h"

std::list<Person> CriteriaMale::meet_criteria(std::list<Person> persons)
{
    std::list<Person> male_persons;
    for (Person person: persons) {
        if (!person.get_gender().compare("male")) {
            male_persons.push_back(person);
        }
    }
    return male_persons;
}