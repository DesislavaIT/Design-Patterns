#include "Adapter.h"
#include <iostream>

Adapter::Adapter(MyClass* _instance) : instance(_instance) {}

void Adapter::PrintNumberBackwards() const
{
    std::cout << "MyClass: (BACKWARDS) ";
    int number = instance->GetNumber();
    while(number)
    {
        std::cout << number % 10;
        number /= 10;
    }

    std::cout << std::endl;
}
