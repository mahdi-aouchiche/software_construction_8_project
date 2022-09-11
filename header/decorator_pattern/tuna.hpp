#ifndef __TUNA_HPP__
#define __TUNA_HPP__

#include "topping.hpp"

class Tuna : public Topping
{
	private:
	string topping_type;
    Pizza* my_pizza;

	public:
	/* Constructor */
    Tuna(Pizza* pizza) : Topping() 
    {   
        this->my_pizza = pizza;
        this->topping_type = "Tuna";
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
