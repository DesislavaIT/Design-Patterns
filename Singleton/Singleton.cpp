#include <iostream>
#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::GetInstance()
{
    if(instance == nullptr)
    {
        instance = new Singleton();
    }
    
    return instance;
}


Singleton::~Singleton()
{
    delete instance;
}

void Singleton::PrintSomething()
{
    std::cout << "Test singleton!" << std::endl;
}

Singleton::Singleton(){}
