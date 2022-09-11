#ifndef __SAUCE_FACTORY_UNIT_TEST_HPP__
#define __SAUCE_FACTORY_UNIT_TEST_HPP__

#include "gtest/gtest.h"
#include "../factory_pattern/sauce_factory/chunky_red_sauce.hpp"
#include "../factory_pattern/sauce_factory/italian_sauce.hpp"
#include "../factory_pattern/sauce_factory/no_sauce.hpp"

TEST(Sauce_Factory_Tests, Chunky_Red_Sauce_Test){
    Sauce* my_sauce = new Chunky_Red_Sauce();

    EXPECT_EQ(my_sauce->get_sauce_type(), "Chunky Red Sauce");
}

TEST(Sauce_Factory_Tests, Italian_Sauce_Test){
    Sauce* my_sauce = new Italian_Sauce();

    EXPECT_EQ(my_sauce->get_sauce_type(), "Italian Sauce");
}

TEST(Sauce_Factory_Tests, No_Sauce_Test){
    Sauce* my_sauce = new No_Sauce();

    EXPECT_EQ(my_sauce->get_sauce_type(), "No Sauce");
}

#endif // __SAUCE_FACTORY_UNIT_TEST_HPP__