#ifndef __CHUNKY_RED_SAUCE_HPP__
#define __CHUNKY_RED_SAUCE_HPP__

#include "sauce.hpp"

class Chunky_Red_Sauce: public Sauce
{
	public:
    /* Constructor */
	Chunky_Red_Sauce() : Sauce("Chunky Red Sauce") {};   

	/* Functions */
    double accept(Visitor* v) {
        return v->visit(this);
    }      
};

#endif  // __CHUNKY_RED_SAUCE_HPP__
