#ifndef Adapter_h
#define Adapter_h
#include "MyClass.h"
#include "ForeignInterface.h"

//class Adapter that can print MyClass's number backwards
class Adapter : public ForeignInterface
{
public:
    Adapter(MyClass* _instance);
    void PrintNumberBackwards() const override;
    
private:
    MyClass* instance;
};

#endif 
