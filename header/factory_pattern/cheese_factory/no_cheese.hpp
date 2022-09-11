#ifndef __NO_CHEESE_HPP__
#define __NO_CHEESE_HPP__

#include "cheese.hpp"

class No_Cheese : public Cheese
{   
    public:
    /* Constructor */
    No_Cheese() : Cheese ("No Cheese") {};
    
    /* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }
};

#endif // __NO_CHEESE_HPP__