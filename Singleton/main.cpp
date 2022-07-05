#include <iostream>
#include "Singleton.h"

int main()
{
    //basic test
    Singleton::GetInstance()->PrintSomething();
    return 0;
}
