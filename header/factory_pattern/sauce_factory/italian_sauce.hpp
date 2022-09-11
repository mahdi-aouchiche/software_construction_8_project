#ifndef __ITALIAN_SAUCE_HPP__
#define __ITALIAN_SAUCE_HPP__

#include "sauce.hpp"
	
class Italian_Sauce: public Sauce
{
	public:
    /* Constructor */
	Italian_Sauce(): Sauce("Italian Sauce") {};  

	/* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }       
};

#endif  // __ITALIAN_SAUCE_HPP__
