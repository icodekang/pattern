#include "singleton.h"

int main()
{
    Singleton *instance = Singleton::get_instance();
    instance->show();

    SingletonObj *instance_obj = SingletonObj::get_instance();
    instance_obj->show();
    
    return 0;
}