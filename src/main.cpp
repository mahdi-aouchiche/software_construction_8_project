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

    /* Display the choosen pizza */
    cout << my_pizza->get_type() << endl;
    cout << "Your favorite pizza will be ready in 15 minutes :)" << endl << endl;
    
    /* Print a receipt with pizza elements cost breakdown */
    cout << "*****************************" << endl;
    cout << "******* YOUR  RECEIPT *******" << endl;
    cout << "*****************************" << endl;
    cout << "Base Pizza:" << endl;

    printf( "  %-20s $%.2f\n", my_crust->get_crust_type().c_str(), my_crust->accept(cost_visitor));
    cost += my_crust->accept(cost_visitor);

    printf( "  %-20s $%.2f\n", my_sauce->get_sauce_type().c_str(), my_sauce->accept(cost_visitor));
    cost += my_sauce->accept(cost_visitor);

    printf( "  %-20s $%.2f\n", my_cheese->get_cheese_type().c_str(), my_cheese->accept(cost_visitor));
    cost += my_cheese->accept(cost_visitor); 

    cout << "-----------------------------" << endl;
    cout << "Toppings:" << endl;
    
    for(int i = 0; i < my_toppings.size(); i++) {
        printf( 
            "  %-20s $%.2f\n", my_toppings.at(i)->get_topping_type().c_str(),
            my_toppings.at(i)->accept(cost_visitor)
        );
        cost += my_toppings.at(i)->accept(cost_visitor);
    }  
    
    cout << "*****************************" << endl;
    printf( "Total: %-15s $%.2f \n", "", cost);
    cout << "*****************************" << endl;
}

#endif // __MAIN_CPP__