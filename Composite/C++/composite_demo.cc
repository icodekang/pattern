#include "employee.h"

int main()
{
    Employee *ceo = new Employee("John", "ceo", 30000);

    Employee *head_sales = new Employee("Robert", "Head Marketing", 20000);

    Employee *head_marketing = new Employee("Michel", "Head Marketing", 20000);

    Employee *clerk1 = new Employee("Laura", "Marketing", 10000);
    Employee *clerk2 = new Employee("Bob", "Marketing", 10000);

    Employee *sales_executive1 = new Employee("Richard", "Sales", 10000);
    Employee *sales_executive2 = new Employee("Rob", "Sales", 10000);

    ceo->add(head_sales);
    ceo->add(head_marketing);

    head_sales->add(sales_executive1);
    head_sales->add(sales_executive2);

    head_marketing->add(clerk1);
    head_marketing->add(clerk2);

    std::cout << ceo->to_string() << std::endl;

    for (Employee *e1: ceo->get_subordinates()) {
        std::cout << e1->to_string() << std::endl;
        for (Employee *e2: e1->get_subordinates()) {
            std::cout << e2->to_string() << std::endl;
        }
    }

    return 0;
}