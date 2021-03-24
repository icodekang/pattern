#include "person.h"

Person::Person(std::string name, std::string gender, std::string marital_status): name(name), gender(gender), marital_status(marital_status)
{

}

std::string Person::get_name()
{
    return name;
}

std::string Person::get_gender()
{
    return gender;
}

std::string Person::get_marital_status()
{
    return marital_status;
}

bool Person::operator==(const Person &person) const
{
    return !name.compare(person.name) && !gender.compare(person.gender) && !marital_status.compare(person.marital_status);
}