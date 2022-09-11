#ifndef __ABSTRACT_PIZZA_HPP__
#define __ABSTRACT_PIZZA_HPP__

#include <string>
using namespace std;

class Abstract_Pizza
{   
    public:
    Abstract_Pizza() {};

    virtual string get_type() = 0;
};

#endif // __ABSTRACT_PIZZA_HPP__