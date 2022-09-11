#ifndef __PIZZA_UNIT_TEST_HPP__
#define __PIZZA_UNIT_TEST_HPP__

#include "gtest/gtest.h"
#include "../pizza.hpp"

TEST(Pizza_Tests, Pizza_With_All_Components) {
    Crust* crust   = new Thick_Crust();
    Sauce* sauce   = new Italian_Sauce();
    Cheese* cheese = new Mixed_Cheese();

    Pizza* my_pizza = new Pizza(crust, sauce, cheese);

    EXPECT_EQ(my_pizza->get_type(), "Your favorite pizza has: Thick Crust, Italian Sauce, Mixed Cheese. "); 
}

TEST(Pizza_Tests, Pizza_Without_Sauce) {
    Crust* crust   = new Thick_Crust();
    Sauce* sauce   = new No_Sauce();
    Cheese* cheese = new Mozzarella_Cheese();

    Pizza* my_pizza = new Pizza(crust, sauce, cheese);

    EXPECT_EQ(my_pizza->get_type(), "Your favorite pizza has: Thick Crust, No Sauce, Mozzarella Cheese. "); 
}

TEST(Pizza_Tests, Pizza_Without_Cheese) {
    Crust* crust   = new Thin_Crust();
    Sauce* sauce   = new Chunky_Red_Sauce();
    Cheese* cheese = new No_Cheese();

    Pizza* my_pizza = new Pizza(crust, sauce, cheese);

    EXPECT_EQ(my_pizza->get_type(), "Your favorite pizza has: Thin Crust, Chunky Red Sauce, No Cheese. "); 
}


#endif // __PIZZA_UNIT_TEST_HPP__