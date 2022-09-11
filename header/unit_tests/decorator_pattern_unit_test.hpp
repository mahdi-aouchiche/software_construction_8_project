#ifndef __DECORATOR_PATTERN_UNIT_TEST_HPP__
#define __DECORATOR_PATTERN_UNIT_TEST_HPP__

#include "gtest/gtest.h"
#include "../decorator_pattern/bell_peppers.hpp"
#include "../decorator_pattern/mushrooms.hpp"
#include "../decorator_pattern/no_topping.hpp"
#include "../decorator_pattern/olives.hpp"
#include "../decorator_pattern/tuna.hpp"

Crust* crust   = new Thin_Crust();
Sauce* sauce   = new Italian_Sauce();
Cheese* cheese = new Mixed_Cheese();

Pizza* pizza = new Pizza(crust, sauce, cheese);

TEST(Decorator_Pattern_Tests, Bell_Peppers_Test) {
    Topping* topping = new Bell_Peppers(pizza);
    
    EXPECT_EQ(topping->get_topping_type(), "Bell Peppers");
    EXPECT_EQ(topping->get_type(), "Your favorite pizza has: Thin Crust, Italian Sauce, Mixed Cheese. Added Bell Peppers. ");
}

TEST(Decorator_Pattern_Tests, Mushrooms_Test) {
    Topping* topping = new Mushrooms(pizza);
    
    EXPECT_EQ(topping->get_topping_type(), "Mushrooms");
    EXPECT_EQ(topping->get_type(), "Your favorite pizza has: Thin Crust, Italian Sauce, Mixed Cheese. Added Mushrooms. ");
}

TEST(Decorator_Pattern_Tests, No_Topping_Test) {
    Topping* topping = new No_Topping(pizza);
    
    EXPECT_EQ(topping->get_topping_type(), "No Topping");
    EXPECT_EQ(topping->get_type(), "Your favorite pizza has: Thin Crust, Italian Sauce, Mixed Cheese. Added No Topping. ");
}

TEST(Decorator_Pattern_Tests, Olives_Test) {
    Topping* topping = new Olives(pizza);
        
    EXPECT_EQ(topping->get_topping_type(), "Olives");
    EXPECT_EQ(topping->get_type(), "Your favorite pizza has: Thin Crust, Italian Sauce, Mixed Cheese. Added Olives. ");
}

TEST(Decorator_Pattern_Tests, Tuna_Test) {
    Topping* topping = new Tuna(pizza);
        
    EXPECT_EQ(topping->get_topping_type(), "Tuna");
    EXPECT_EQ(topping->get_type(), "Your favorite pizza has: Thin Crust, Italian Sauce, Mixed Cheese. Added Tuna. ");
}

TEST(Decorator_Pattern_Tests, Multiple_Toppings_Test) {
    Topping* topping = new Tuna(pizza);
    EXPECT_EQ(topping->get_topping_type(), "Tuna");

    topping = new Olives(topping);
    EXPECT_EQ(topping->get_topping_type(), "Olives");

    topping = new Tuna(topping);
    EXPECT_EQ(topping->get_topping_type(), "Tuna");

    topping = new Mushrooms(topping);    
    EXPECT_EQ(topping->get_topping_type(), "Mushrooms");

    EXPECT_EQ(topping->get_type(), "Your favorite pizza has: Thin Crust, Italian Sauce, Mixed Cheese. Added Tuna. Added Olives. Added Tuna. Added Mushrooms. ");
}

#endif // __DECORATOR_PATTERN_UNIT_TEST_HPP__