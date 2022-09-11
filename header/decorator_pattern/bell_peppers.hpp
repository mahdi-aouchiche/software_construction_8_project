#ifndef __BELL_PEPPERS_HPP__
#define __BELL_PEPPERS_HPP__

#include "topping.hpp"

class Bell_Peppers : public Topping 
{
	private:
	string topping_type;
    Pizza* my_pizza;

	public:
	/* Constructor */
    Bell_Peppers(Pizza* pizza) : Topping() 
    {
        this->my_pizza = pizza;
        this->topping_type = "Bell Peppers";
    };

	/* Functions */
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

#endif	// __BELL_PEPPERS_HPP__
