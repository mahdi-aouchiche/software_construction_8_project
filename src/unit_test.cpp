#include "gtest/gtest.h"
#include "../header/unit_tests/cheese_factory_unit_test.hpp"
#include "../header/unit_tests/crust_factory_unit_test.hpp"
#include "../header/unit_tests/sauce_factory_unit_test.hpp"
#include "../header/unit_tests/pizza_unit_test.hpp"
#include "../header/unit_tests/decorator_pattern_unit_test.hpp"
#include "../header/unit_tests/visitor_pattern_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}