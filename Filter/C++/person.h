#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>

class Person
{
private:
    std::string name;
    std::string gender;
    std::string marital_status;

public:
    Person(std::string name, std::string gender, std::string marital_status);
    std::string get_name();
    std::string get_gender();
    std::string get_marital_status();
    bool operator==(const Person &person) const;
    ~Person() = default;
};

#endif /* _PERSON_H_ */