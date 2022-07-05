#include "ForeignInterface.h"
#include <iostream>

void ForeignInterface::PrintNumberBackwards() const
{
    int defaultNumber = 555;
    while(defaultNumber)
    {
        std::cout << defaultNumber % 10;
        defaultNumber /= 10;
    }

    std::cout << std::endl;
}
