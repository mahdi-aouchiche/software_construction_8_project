#ifndef __MIXED_CHEESE_HPP__
#define __MIXED_CHEESE_HPP__

#include "cheese.hpp"

class Mixed_Cheese : public Cheese 
{   
    public:
    /* Constructor */
    Mixed_Cheese() : Cheese ("Mixed Cheese") {};

    /* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }
};

#endif // __MIXED_CHEESE_HPP__