#ifndef __CRUST_FACTORY_UNIT_TEST_HPP__
#define __CRUST_FACTORY_UNIT_TEST_HPP__

#include "gtest/gtest.h"
#include "../factory_pattern/crust_factory/thick_crust.hpp"
#include "../factory_pattern/crust_factory/thin_crust.hpp"

TEST(Crust_Factory_Tests, Thick_Crust_Test){
    Crust* my_crust = new Thick_Crust();

    EXPECT_EQ(my_crust->get_crust_type(), "Thick Crust");
}

TEST(Crust_Factory_Tests, Thin_Crust_Test){
    Crust* my_crust = new Thin_Crust();

    EXPECT_EQ(my_crust->get_crust_type(), "Thin Crust");
}

#endif // __CRUST_FACTORY_UNIT_TEST_HPP__