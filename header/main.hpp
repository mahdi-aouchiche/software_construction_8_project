#ifndef __MAIN_HPP__
#define __MAIN_HPP__

#include "headers/main_headers.hpp"

/*Helper function used in main.cpp */

void crust_menu() {
    cout << "Select from menu a crust for your pizza:" << endl;
    cout << "-Thick Crust :  press \'1\'" << endl;
    cout << "-Thin Crust  :  press \'2\'" << endl;
    cout << "You selected : "; 
}

void sauce_menu() {
    cout << "Select from menu a sauce for your pizza:" << endl;
    cout << "-No Sauce        :  press \'0\'" << endl;
    cout << "-Italian Sauce   :  press \'1\'" << endl;
    cout << "-Chunky Red Sauce:  press \'2\'" << endl;
    cout << "You selected     : ";
}

void cheese_menu() {
    cout << "Select from menu a cheese for your pizza:" << endl;
    cout << "-No Cheese         :  press \'0\'" << endl;
    cout << "-Mozzarella Cheese :  press \'1\'" << endl;
    cout << "-Mixed Cheese      :  press \'2\'" << endl;
    cout << "You selected       : ";
}

void topping_menu() {
    cout << "Select from menu a topping to add on your pizza:" << endl;
    cout << "-No Toppings        :  press \'0\'" << endl;
    cout << "-Bell Peppers       :  press \'1\'" << endl;
    cout << "-Mushrooms          :  press \'2\'" << endl;
    cout << "-Olives             :  press \'3\'" << endl;
    cout << "-Tuna               :  press \'4\'" << endl;
    cout << "-Done With Toppings :  press \'5\'" << endl;
    cout << "You selected        : ";
}

void invalid_input() {
    cout << "Invalid input. Please choose an option from the menu!" << endl << endl;
}

Crust* choose_crust() {
    Crust* my_crust = nullptr;
    int crust_type;

    do {
        crust_menu();
        cin >> crust_type;

        if(!cin) {
            cin.clear();            // reset failbit 
            cin.ignore(20, '\n');   //skip bad input
            cout << "Please choose a number from the menu!\n" << endl;
        } else if(crust_type == 1) {
            my_crust = new Thick_Crust();
            break;

        } else if(crust_type == 2 ) {
            my_crust = new Thin_Crust();
            break;

        } else {
            invalid_input();   
        }
    } while (true);

    return my_crust;
}

Sauce* choose_sauce() {
    Sauce* my_sauce = nullptr;
    int sauce_type;

    do {
        sauce_menu();
        cin >> sauce_type;

        if(!cin) {
            cin.clear();            // reset failbit 
            cin.ignore(20, '\n');   //skip bad input
            cout << "Please choose a number from the menu!\n" << endl;
        
        } else if(sauce_type == 0) {
            my_sauce = new No_Sauce();
            break;

        } else if(sauce_type == 1) {
            my_sauce = new Italian_Sauce();
            break;

        } else if(sauce_type == 2) {
            my_sauce = new Chunky_Red_Sauce();
            break;

        } else {
            invalid_input();
        }
    } while (true);    

    return my_sauce;
}

Cheese* choose_cheese() {
    Cheese* my_cheese = nullptr;
    int cheese_type;

    do {
        cheese_menu();
        cin >> cheese_type;

        if(!cin) {
            cin.clear();            // reset failbit 
            cin.ignore(20, '\n');   //skip bad input
            cout << "Please choose a number from the menu!\n" << endl;

        } else if(cheese_type == 0) {
            my_cheese = new No_Cheese();
            break;

        } else if(cheese_type == 1 ) {
            my_cheese = new Mozzarella_Cheese();
            break;

        } else if(cheese_type == 2) {
            my_cheese = new Mixed_Cheese();
            break;

        } else {
            invalid_input();
        }
    } while (true);

    return my_cheese; 
}

void choose_toppings(vector<Topping*> &my_toppings , Pizza* &my_pizza) {
    int topping_type;
    Topping* added_topping = nullptr;

    do{
        topping_menu();
        cin >> topping_type;

        if(!cin) { 
            cin.clear();
            cin.ignore(20, '\n'); 
            invalid_input();
        
        } else if(topping_type == 0 || topping_type == 5) {
            if(my_toppings.size() < 1) { /* No Toppings */
                added_topping = new No_Topping(my_pizza);
                my_toppings.push_back(added_topping);
                my_pizza = added_topping; 
                cout << "Your pizza will have " << added_topping->get_topping_type() << endl << endl; 
                break;
            }
            /* Done with toppings */
            cout << "You are done adding toppings." << endl << endl; 
            break;
            
        } else if(topping_type == 1) { /* Bell Peppers added */
            added_topping = new Bell_Peppers(my_pizza);
            my_toppings.push_back(added_topping);
            my_pizza = added_topping;
            cout << "Your pizza will have " << added_topping->get_topping_type() << endl << endl;

        } else if(topping_type == 2) { /* Mushrooms added */
            added_topping = new Mushrooms(my_pizza);
            my_toppings.push_back(added_topping);
            my_pizza = added_topping;
            cout << "Your pizza will have " << added_topping->get_topping_type() << endl << endl;
        
        } else if(topping_type == 3) { /* Olives added */
            added_topping = new Olives(my_pizza);
            my_toppings.push_back(added_topping);
            my_pizza = added_topping;
            cout << "Your pizza will have " << added_topping->get_topping_type() << endl << endl;

        } else if(topping_type == 4) { /* Tuna added */
            added_topping = new Tuna(my_pizza);
            my_toppings.push_back(added_topping);
            my_pizza = added_topping;
            cout << "Your pizza will have " << added_topping->get_topping_type() << endl << endl;
        
        } else {
            invalid_input();
        }
    } while (true);
}

#endif // __MAIN_HPP__