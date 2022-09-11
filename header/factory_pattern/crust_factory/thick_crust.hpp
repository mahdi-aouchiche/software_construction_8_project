#ifndef __THICK_CRUST_HPP__
#define __THICK_CRUST_HPP__

#include "crust.hpp"

class Thick_Crust : public Crust
{   
    public:
    /* Constructor */
    Thick_Crust() : Crust ("Thick Crust") {};
    
    /* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }
};

#endif // __THICK_CRUST_HPP__