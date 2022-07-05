#ifndef Singleton_h
#define Singleton_h

class Singleton //only one instance
{
public:
    //there is no copy control
    Singleton(Singleton &other) = delete;
    Singleton& operator=(const Singleton &) = delete;
    static Singleton* GetInstance(); //the only instance of the class
    ~Singleton();
    
    void PrintSomething(); //test method
    //other public non-static methods...
private:
    Singleton(); //constructor must be private
    static Singleton* instance; //static private instance
};

#endif
