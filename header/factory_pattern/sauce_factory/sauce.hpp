#ifndef __SAUCE_HPP__
#define __SAUCE_HPP__

#include <string>
#include "../../visitor_pattern/visitable.hpp"
using namespace std;

class Sauce : public Visitable
{
	private:
    string sauce_type;
           
    public:
    /* Constructors */
    Sauce(string type) : sauce_type(type) {};

    /* Functions */
    virtual string get_sauce_type() {
        return this->sauce_type;
    };
};

#endif  // __SAUCE_HPP__