#include "singleton.h"

Singleton* Singleton::instance;
std::mutex Singleton::g_mutex;

Singleton *Singleton::get_instance()
{
    g_mutex.lock();
    if (instance == nullptr) {
        instance = new Singleton();
    }
    g_mutex.unlock();
    return instance;
}

SingletonObj *SingletonObj::instance = new SingletonObj();

void Singleton::show()
{
    std::cout << "Hello World" << std::endl;
}

SingletonObj *SingletonObj::get_instance()
{
    return instance;
}

void SingletonObj::show()
{
    std::cout << "Hello World" << std::endl;
}