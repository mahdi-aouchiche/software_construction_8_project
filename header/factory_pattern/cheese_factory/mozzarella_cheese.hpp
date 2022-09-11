#ifndef __MOZZARELLA_CHEESE_HPP__
#define __MOZZARELLA_CHEESE_HPP__

#include "cheese.hpp"

class Mozzarella_Cheese : public Cheese
{   
    public:
    /* Constructor */
    Mozzarella_Cheese() : Cheese ("Mozzarella Cheese") {};

    /* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }
};

#endif // __MOZZARELLA_CHEESE_HPP__