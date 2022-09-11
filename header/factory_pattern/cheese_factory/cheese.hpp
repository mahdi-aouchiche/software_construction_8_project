#ifndef __CHEESE_HPP__
#define __CHEESE_HPP__

#include <string>
#include "../../visitor_pattern/visitable.hpp"
using namespace std;

class Cheese : public Visitable
{
	private:
    string cheese_type;
            
    public:
    /* Constructors */
    Cheese(string type) : cheese_type(type) {};

    /* Functions */
    virtual string get_cheese_type() {
        return this->cheese_type;
    };
};

#endif  // __CHEESE_HPP__
