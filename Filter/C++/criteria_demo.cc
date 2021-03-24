#include "criteria_male.h"
#include "criteria_female.h"
#include "criteria_single.h"
#include "and_criteria.h"
#include "or_criteria.h"

void print_persons(std::list<Person> persons)
{
    for (Person person: persons) {
        std::cout << "person: [ name: " << person.get_name() 
        << ", gender: " << person.get_gender()
        << ", marital status: " << person.get_marital_status() << " ]" << std::endl;
    }
}

int main()
{
    std::list<Person> persons;

    persons.push_back(Person("robert", "male", "single"));
    persons.push_back(Person("john", "male", "married"));
    persons.push_back(Person("laura", "female", "married"));
    persons.push_back(Person("diana", "female", "single"));
    persons.push_back(Person("mike", "male", "single"));
    persons.push_back(Person("bobby", "male", "single"));

    Criteria *male = new CriteriaMale();
    Criteria *female = new CriteriaFemale();
    Criteria *single = new CriteriaSingle();
    Criteria *single_male = new AndCriteria(single, male);
    Criteria *single_or_female = new OrCriteria(single, female);

    std::cout << "-----------------------------------" << std::endl;
    print_persons(male->meet_criteria(persons));
    std::cout << "-----------------------------------" << std::endl;
    print_persons(female->meet_criteria(persons));
    std::cout << "-----------------------------------" << std::endl;
    print_persons(single_male->meet_criteria(persons));
    std::cout << "-----------------------------------" << std::endl;
    print_persons(single_or_female->meet_criteria(persons));
    std::cout << "-----------------------------------" << std::endl;
    return 0;
}