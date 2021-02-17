#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
#include <mutex>

/**
 * 懒汉式，线程安全
 */
class Singleton
{
private:
    static Singleton *instance;
    static std::mutex g_mutex;

    Singleton() = default;
    Singleton(const Singleton &);
    Singleton & operator=(const Singleton &);
    ~Singleton() = default;

public:
    static Singleton *get_instance();
    static void show();
};

/**
 * 饿汉式，线程安全
 */
class SingletonObj
{
private:
    static SingletonObj *instance;

    SingletonObj() = default;
    SingletonObj(const SingletonObj &);
    SingletonObj & operator=(const SingletonObj &);
    ~SingletonObj() = default;
public:
    static SingletonObj *get_instance();
    static void show();
};

#endif /* _SINGLETON_H_ */