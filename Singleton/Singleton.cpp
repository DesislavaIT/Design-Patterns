#include <iostream>
#include "Singleton.h"

Singleton* Singleton::instance = nullptr; //first of all initialize the static field

Singleton* Singleton::GetInstance()
{
    //check if instance is already created
    if(instance == nullptr)
    {
        //double null check & lock -> don't know how to do it in C++
        if(instance == nullptr)
        {
            //if instance not created -> create it
            instance = new Singleton();
        }
    }
    
    //then return it
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
