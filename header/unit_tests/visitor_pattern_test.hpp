#ifndef __VISITOR_PATTERN_TEST_HPP__
#define __VISITOR_PATTERN_TEST_HPP__

#include "gtest/gtest.h"
#include "../visitor_pattern/cost_visitor.hpp"

Visitor* cost_visitor  = new Cost_Visitor();

TEST(Visitor_Pattern_Tests, crust_Cost){
    Crust* crust;

    crust = new Thick_Crust();
    EXPECT_DOUBLE_EQ(crust->accept(cost_visitor), 4.99);

    crust = new Thin_Crust();
    EXPECT_DOUBLE_EQ(crust->accept(cost_visitor), 3.99);
}

TEST(Visitor_Pattern_Tests, Sauce_Cost){
    Sauce* sauce;

    sauce = new Italian_Sauce();
    EXPECT_DOUBLE_EQ(sauce->accept(cost_visitor), 2.00 );

    sauce = new Chunky_Red_Sauce();
    EXPECT_DOUBLE_EQ(sauce->accept(cost_visitor), 1.50 );

    sauce = new No_Sauce();
    EXPECT_DOUBLE_EQ(sauce->accept(cost_visitor), 0.00 );
}

TEST(Visitor_Pattern_Tests, Cheese_Cost){
    Cheese* cheese;

    cheese = new Mozzarella_Cheese();
    EXPECT_DOUBLE_EQ(cheese->accept(cost_visitor), 1.50 );

    cheese = new Mixed_Cheese();
    EXPECT_DOUBLE_EQ(cheese->accept(cost_visitor), 2.50 );

    cheese = new No_Cheese();
    EXPECT_DOUBLE_EQ(cheese->accept(cost_visitor), 0.00 );
}

TEST(Visitor_Pattern_Tests, Topping_Decorators_Test){
    Pizza* my_pizza = new Pizza(new Thin_Crust(), new No_Sauce(), new No_Cheese());
    Topping* topping;

    topping = new Bell_Peppers(my_pizza);
    EXPECT_DOUBLE_EQ(topping->accept(cost_visitor), 0.99 );

    topping = new Mushrooms(my_pizza);
    EXPECT_DOUBLE_EQ(topping->accept(cost_visitor), 0.99 );

    topping = new No_Topping(my_pizza);
    EXPECT_DOUBLE_EQ(topping->accept(cost_visitor), 0.00 );

    topping = new Olives(my_pizza);
    EXPECT_DOUBLE_EQ(topping->accept(cost_visitor), 0.99 );

    topping = new Tuna(my_pizza);
    EXPECT_DOUBLE_EQ(topping->accept(cost_visitor), 3.50 );

    topping = new Tuna(topping);
    EXPECT_DOUBLE_EQ(topping->accept(cost_visitor), 3.50 );

    topping = new Olives(topping);
    EXPECT_DOUBLE_EQ(topping->accept(cost_visitor), 0.99 );  
}

#endif // __VISITOR_PATTERN_TEST_HPP__