#ifndef __COST_VISITOR_HEADERS__
#define __COST_VISITOR_HEADERS__

#include <iostream>
#include <string>
#include "../visitor_pattern/visitor.hpp"

/* Crust */
#include "../factory_pattern/crust_factory/thick_crust.hpp"
#include "../factory_pattern/crust_factory/thin_crust.hpp"
/* Sauce */
#include "../factory_pattern/sauce_factory/chunky_red_sauce.hpp"
#include "../factory_pattern/sauce_factory/italian_sauce.hpp"
#include "../factory_pattern/sauce_factory/no_sauce.hpp"
/* Cheese */
#include "../factory_pattern/cheese_factory/mixed_cheese.hpp"
#include "../factory_pattern/cheese_factory/mozzarella_cheese.hpp"
#include "../factory_pattern/cheese_factory/no_cheese.hpp"
/* Toppings */
#include "../decorator_pattern/bell_peppers.hpp"
#include "../decorator_pattern/mushrooms.hpp"
#include "../decorator_pattern/olives.hpp"
#include "../decorator_pattern/tuna.hpp"
#include "../decorator_pattern/no_topping.hpp"

#endif // __COST_VISITOR_HEADERS__