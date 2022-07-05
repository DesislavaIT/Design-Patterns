#ifndef ForeignInterface_h
#define ForeignInterface_h

//foreign logic that prints number backwards
class ForeignInterface
{
public:
    virtual ~ForeignInterface() = default;
    virtual void PrintNumberBackwards() const;
};

#endif
