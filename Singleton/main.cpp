#include <iostream>
#include "Singleton.h"

int main() {
    Singleton::GetInstance()->PrintSomething();
    return 0;
}
