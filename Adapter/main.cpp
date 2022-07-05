#include "Adapter.h"
#include <iostream>

int main() {
    MyClass mc(123);
    mc.PrintNumber();
    Adapter a(&mc);
    a.PrintNumberBackwards();
    return 0;
}
