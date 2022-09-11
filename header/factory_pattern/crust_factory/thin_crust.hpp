#ifndef __THIN_CRUST_HPP__
#define __THIN_CRUST_HPP__

#include "crust.hpp"

class Thin_Crust : public Crust
{   
    public:
    /* Constructor */
    Thin_Crust() : Crust ("Thin Crust") {};

    /* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }
};

#endif // __THIN_CRUST_HPP__