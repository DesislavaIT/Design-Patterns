#include <iostream>
#include "Singleton.h"

int main()
{
    //test singleton
    Singleton::GetInstance()->PrintSomething();
    return 0;
}
