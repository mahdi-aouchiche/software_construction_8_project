#ifndef __Olives_HPP__
#define __Olives_HPP__

#include "topping.hpp"

class Olives : public Topping 
{
	private:
	string topping_type;
    Pizza* my_pizza;

	public:
	/* Constructor */
    Olives(Pizza* pizza) : Topping() 
    {
        this->my_pizza = pizza;
        this->topping_type = "Olives";
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

#endif	// __TUNA_HPP__
