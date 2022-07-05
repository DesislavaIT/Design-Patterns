#ifndef Singleton_h
#define Singleton_h

class Singleton //only one instance
{
public:
    Singleton(Singleton &other) = delete;
    Singleton& operator=(const Singleton &) = delete;
    static Singleton* GetInstance();
    ~Singleton();
    
    //public non-static methods
    void PrintSomething(); //test method
private:
    Singleton();
    static Singleton* instance;
};

#endif
