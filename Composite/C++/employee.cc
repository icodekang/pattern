#include "employee.h"

Employee::Employee(std::string name, std::string dept, int sal)
{
    this->name = name;
    this->dept = dept;
    this->sal = sal;
}

void Employee::add(Employee *e)
{
    subordinates.push_back(e);
}

void Employee::remove(Employee *e)
{
    subordinates.remove(e);
}

std::list<Employee *> Employee::get_subordinates()
{
    return subordinates;
}

std::string Employee::to_string()
{
    std::stringstream ss;
    ss << sal;
    return "Employee :[ Name : " + name + ", dept : " + dept + ", salary : " + ss.str() + " ]";
}

Employee::~Employee()
{
    for (Employee *e1: subordinates) {
        for (Employee *e2: e1->get_subordinates()) {
            delete e2;
            e2 = nullptr;
        }
        delete e1;
        e1 = nullptr;
    }
}