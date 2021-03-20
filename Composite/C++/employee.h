#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <iostream>
#include <sstream>
#include <string>
#include <list>

class Employee
{
private:
    std::string name;
    std::string dept;
    int sal;
    std::list<Employee *> subordinates;

public:
    Employee(std::string name, std::string dept, int sal);
    void add(Employee *e);
    void remove(Employee *e);
    std::list<Employee *> get_subordinates();
    std::string to_string();
    ~Employee();
};

#endif /* _EMPLOYEE_H_ */