#ifndef __VISITABLE_HPP__
#define __VISITABLE_HPP__

#include "visitor.hpp"

class Visitable
{
    public:
    virtual double accept(Visitor* v) = 0;
};

#endif //__VISITABLE_HPP__