#ifndef __NO_TOPPING_HPP__
#define __NO_TOPPING_HPP__

#include "topping.hpp"

class No_Topping : public Topping
{
	private:
    Pizza* my_pizza;
	string topping_type;

	public:
	/* Constructor */
    No_Topping(Pizza* pizza) : Topping() 
    {
        this->my_pizza = pizza;
        this->topping_type = "No Topping";
    };

	//* Functions */
    string get_type() {
        string type = this->my_pizza->get_type() 
                    + "Added " 
                    + this->topping_type
                    + ". ";
        return type;
    }
    
    string get_topping_type() { 
        return this->topping_type;
    }

    double accept(Visitor* v) {
        return v->visit(this);
    }  	
};

#endif	// __NO_TOPPING_HPP__
