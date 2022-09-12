#ifndef __MAIN_CPP__
#define __MAIN_CPP__

#include "../header/main.hpp"

int main() {
    /* Holds the cost total cost */
    double cost = 0;   
               
    /* Create a cost visitor pointer for an updated cost */
    Visitor* cost_visitor  = new Cost_Visitor();
    
    /* Build your pizza */
    cout << "BUILD YOUR FAVORITE PIZZA" << endl;

    /* Choose a crust */
    Crust* my_crust = choose_crust();
    cout << "Your pizza will have " << my_crust->get_crust_type() << endl << endl;

    /* Choose a sauce */
    Sauce* my_sauce = choose_sauce();
    cout << "Your pizza will have " << my_sauce->get_sauce_type() << endl << endl;

    /* Choose a cheese */
    Cheese* my_cheese = choose_cheese();
    cout << "Your pizza will have " << my_cheese->get_cheese_type() << endl << endl;

    /* Create a base pizza and choose toppings to add*/
    Pizza* my_pizza = new Pizza(my_crust, my_sauce, my_cheese);
    
    /* Add toppings */
    vector<Topping*> my_toppings; 
    choose_toppings(my_toppings, my_pizza);

    /* Print a receipt with pizza elements cost breakdown */
    print_receipt(my_crust, my_sauce, my_cheese, cost_visitor, my_toppings, cost);

    /* Display the choosen pizza */
    cout << my_pizza->get_type() << endl;
    cout << "Pay: $" << cost << endl; 
    cout << "Your favorite pizza will be ready in 15 minutes :)" << endl << endl;

    return 0;
}

#endif // __MAIN_CPP__