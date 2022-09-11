#ifndef __COST_VISITOR_HPP__
#define __COST_VISITOR_HPP__

#include "../headers/cost_visitor_headers.hpp"

class Cost_Visitor : public Visitor
{
    private:
    /* Crust prices */
    double thick_crust_price = 4.99;          
    double thin_crust_price  = 3.99;          

    /* Sauce prices */
    double italian_sauce_price    = 2.00;        
    double chunky_red_sauce_price = 1.50;     
    
    /* Cheese prices */
    double mozzarella_cheese_price = 1.50;    
    double mixed_cheese_price      = 2.50; 

    /* Topping prices */        
    double tuna_price         = 3.50;
    double olives_price       = 0.99;
    double mushrooms_price    = 0.99;
    double bell_peppers_price = 0.99;

    public:
    /* Constructor */
    Cost_Visitor() {};

    /*Functions */
    /* Visit thick crust */
    double visit(Thick_Crust* crust) {
        return thick_crust_price; 
    } 

    /* Visit thin crust */
    double visit(Thin_Crust* crust) {
        return thin_crust_price; 
    }

    /* Visit chunky red sauce */
    double visit(Chunky_Red_Sauce* sauce) {
        return chunky_red_sauce_price; 
    }

    /* Visit Italian sauce */
    double visit(Italian_Sauce* sauce) {
        return italian_sauce_price; 
    }

    /* Visit no sauce */
    double visit(No_Sauce* sauce) {
        return 0.00; 
    }

    /* Visit mozzarella cheese */
    double visit(Mozzarella_Cheese* cheese) {
        return mozzarella_cheese_price; 
    }

    /* Visit mixed cheese */
    double visit(Mixed_Cheese* cheese) {
        return mixed_cheese_price; 
    }

    /* Visit no cheese */
    double visit(No_Cheese* cheese) {
        return 0.00; 
    }

    /* Visit tuna topping */
    double visit(Tuna* topping) {
        return tuna_price;
    }

    /* Visit olives topping */
    double visit(Olives* topping) {
        return olives_price;
    }

    /* Visit mushrooms topping */
    double visit(Mushrooms* topping) {
        return mushrooms_price;
    }

    /* Visit bell peppers topping */
    double visit(Bell_Peppers* topping) {
        return bell_peppers_price;
    }

    /* Visit no topping */
        double visit(No_Topping* topping) {
        return 0.00;
    }
};

#endif // __COST_VISITOR_HPP__