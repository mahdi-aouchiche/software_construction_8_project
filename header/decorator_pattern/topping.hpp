#ifndef __TOPPING_HPP__
#define __TOPPING_HPP__

#include "../headers/topping_headers.hpp"
using namespace std;

class Topping : public Pizza, public Visitable
{   
    public:
    /* Constructor */
    Topping() {};

    /* Functions */
    virtual string get_topping_type() = 0;
    virtual string get_type()         = 0;
    virtual double accept(Visitor* v) = 0;
};

#endif // __TOPPING_HPP__