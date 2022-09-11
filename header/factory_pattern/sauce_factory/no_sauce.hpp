#ifndef __NO_SAUCE_HPP__
#define __NO_SAUCE_HPP__

#include "sauce.hpp"

class No_Sauce: public Sauce
{
	public:
    /* Constructor */
	No_Sauce(): Sauce("No Sauce") {};  

	/* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }     
};

#endif  // __NO_SAUCE_HPP__
