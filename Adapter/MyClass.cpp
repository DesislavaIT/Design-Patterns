#include "MyClass.h"
#include <iostream>

MyClass::MyClass(int number)
{
    this->number = number;
}

void MyClass::PrintNumber() const
{
    std::cout << "MyClass: " << number << std::endl;
}

int MyClass::GetNumber() const
{
    return number;
}
