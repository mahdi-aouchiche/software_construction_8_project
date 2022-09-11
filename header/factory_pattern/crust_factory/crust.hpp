#ifndef __CRUST_HPP__
#define __CRUST_HPP__

#include <string>
#include "../../visitor_pattern/visitable.hpp"
using namespace std;

class Crust : public Visitable
{
	private:
    string crust_type;
        
    public:
    /* Constructors */
    Crust(string type) : crust_type(type) {};

    /* Functions */
    virtual string get_crust_type() {
        return this->crust_type;
    };
};

#endif  // __CRUST_HPP__
