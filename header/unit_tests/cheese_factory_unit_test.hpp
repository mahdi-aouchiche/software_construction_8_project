#ifndef __CHEESE_FACTORY_UNIT_TEST_HPP__
#define __CHEESE_FACTORY_UNIT_TEST_HPP__

#include "gtest/gtest.h"
#include "../factory_pattern/cheese_factory/mixed_cheese.hpp"
#include "../factory_pattern/cheese_factory/mozzarella_cheese.hpp"
#include "../factory_pattern/cheese_factory/no_cheese.hpp"

TEST(Cheese_Factory_Tests, Mixed_Cheese_Test){
    Cheese* my_cheese = new Mixed_Cheese();

    EXPECT_EQ(my_cheese->get_cheese_type(), "Mixed Cheese");
}

TEST(Cheese_Factory_Tests, Mozzarella_Cheese_Test){
    Cheese* my_cheese = new Mozzarella_Cheese();

    EXPECT_EQ(my_cheese->get_cheese_type(), "Mozzarella Cheese");
}

TEST(Cheese_Factory_Tests, No_Cheese_Test){
    Cheese* my_cheese = new No_Cheese();

    EXPECT_EQ(my_cheese->get_cheese_type(), "No Cheese");
}




#endif // __CHEESE_FACTORY_UNIT_TEST_HPP__