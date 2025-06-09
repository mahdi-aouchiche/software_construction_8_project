#ifndef __MAIN_HPP__
#define __MAIN_HPP__

#include "headers/main_headers.hpp"

/*Helper functions used in main.cpp */

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

map<Topping*, int> choose_toppings(Pizza* &my_pizza) {
    map<Topping*, int> toppings;
    int topping_type;

    // toppings to select from
    Topping *bell_peppers = new Bell_Peppers(my_pizza);
    Topping *mushrooms    = new Mushrooms(my_pizza);
    Topping *olives       = new Olives(my_pizza);
    Topping *tuna         = new Tuna(my_pizza);
    
    do{
        topping_menu();
        cin >> topping_type;

        if(!cin) { /* Wrong input */
            cin.clear();
            cin.ignore(255, '\n'); 
            invalid_input();
            continue;
        } 
                    
        if(topping_type == 0) { /* No Toppings */
            // Return empty map with no toppings 
            toppings.erase(toppings.begin(), toppings.end());
            break;    
            
        } else if(topping_type == 1) { /* Bell Peppers added */           
            toppings[bell_peppers]++;

        } else if(topping_type == 2) { /* Mushrooms added */
            toppings[mushrooms]++;

        } else if(topping_type == 3) { /* Olives added */
            toppings[olives]++;

        } else if(topping_type == 4) { /* Tuna added */
            toppings[tuna]++;

        } else if(topping_type == 5) { /* Done with toppings */
            cout << "You are done adding toppings." << endl;
            break;

        } else {
            invalid_input();
        }
    } while (true);

    if(toppings.empty()) {
        cout << "No toppings added." << endl;
    } else {
        cout << "Added toppings: ";
        
        map<Topping*, int>::iterator t;
        for(t = toppings.begin(); t != prev(toppings.end()); ++t) {
            cout << t->first->get_topping_type() << "(x " << t->second << ")"<< ", ";
        }
        cout << t->first->get_topping_type() << "(x " << t->second << ")" << endl;
    }
    
    return toppings;
}

void print_receipt(Crust* &crust, Sauce* &sauce, Cheese* &cheese, Visitor* &cost_visitor, map<Topping*, int> &toppings, double &cost) {
    
    cout << "******************************" << endl;
    cout << "******** YOUR RECEIPT ********" << endl;
    cout << "******************************" << endl;
    cout << "Base Pizza:" << endl;

    printf( "  %-22s $%.2f\n", crust->get_crust_type().c_str(), crust->accept(cost_visitor));
    cost += crust->accept(cost_visitor);

    printf( "  %-22s $%.2f\n", sauce->get_sauce_type().c_str(), sauce->accept(cost_visitor));
    cost += sauce->accept(cost_visitor);

    printf( "  %-22s $%.2f\n", cheese->get_cheese_type().c_str(), cheese->accept(cost_visitor));
    cost += cheese->accept(cost_visitor); 

    cout << "------------------------------" << endl;
    cout << "Toppings:" << endl;
        
    for(auto t: toppings) {
        printf(
            "  %-18s %d x $%.2f\n", 
            t.first->get_topping_type().c_str(), 
            t.second,
            t.first->accept(cost_visitor)
        );

        cost += t.second * t.first->accept(cost_visitor);
    }

    if(toppings.empty()) {
        printf( "  %-22s $%.2f\n", "No Toppins Added", 0.0);
    }

    cout << "******************************" << endl;
    // printf( "%-23s $%*.2f \n", "Total:", 5, cost);
    printf( "%-23s $%5.2f\n", "Total:", cost);
    cout << "******************************" << endl;
}

#endif // __MAIN_HPP__