#ifndef __PIZZA_HPP__
#define __PIZZA_HPP__

#include "./headers/pizza_headers.hpp"

class Pizza : Abstract_Pizza
{
    private:
    Crust*  my_crust;
    Sauce*  my_sauce;
    Cheese* my_cheese;

    public:
    /* Constructors & Destructor */
    Pizza() {};
    
    Pizza(Crust* crust, Sauce* sauce, Cheese* cheese)
    : my_crust(crust), my_sauce(sauce), my_cheese(cheese) {};
  
    ~Pizza() 
    {  
        delete my_crust;
        delete my_sauce; 
        delete my_cheese;
        delete this;
    };

    /* Implement pure virtual functions */
    string get_type() {
        string type = "Your favorite pizza has: "    
                    + my_crust->get_crust_type()   + ", " 
                    + my_sauce->get_sauce_type()   + ", " 
                    + my_cheese->get_cheese_type() + ". ";
        return type;
    }
};

#endif // __PIZZA_HPP__