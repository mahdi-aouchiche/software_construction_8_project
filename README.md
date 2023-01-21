# Software Construction: Project

> Author: Mahdi Aouchiche (<https://github.com/mahdi-aouchiche/software_construction_8_project>)

## Project: Pizza Vending Machine

The interesting factor of this project is the technological advancements in different types of industries and the creation of different types of experiences that consumers enjoy with a more personalized service such as ordering their food.

The project is focused on designing a code for an automated pizza vending machine which makes custom made pizzas based on user selection.
Users can make their own favorite pizza by selecting the type of crust, sauce, and cheese to have in their base pizza.
Once the base pizza selection is complete, the user is prompted to choose from different types of toppings such as bell peppers, mushrooms, olives, and tuna, to complete their personalized favorite pizza ingredients.

The project is programmed in C++ language in a Linux environment and pushed to github repository using Git.

The project design uses 3 different types of software construction patterns:
    1.***The Factory Pattern:*** which includes the crust, the sauce, and the cheese factories. Each factory provides different types of its own products which the user can select from to construct the base pizza pizza of their choice.
    2. ***The Decorator Pattern:*** which is responsible to provide the different toppings that the user can add to complete the base pizza.
    3. ***The Visitor Pattern:*** which is responsible to set and display the prices of each element available to the user. it also provides an easy way to update the prices of available elements in the event of a cost increases over time. and finally it provides an easy adaptation to add different elements in the future such as adding more topping types and different types of crust, sauce, or cheese to provide more availability to the user preferences.

Google Test is used for unit testing. Each of the 3 factories clases, each topping class, and the cost-visitor class has a unit-test. Class combination tests are also included to check correct inteded output.

Finally, a main function is created to accomodate the user interface to easily navigate the selection menus and to seemlessly provide a user friendly experience.

* The input of this app is the different user selections for each pizza component (crust, sauce, chesse, desired types of toppings).
* The output of the app is the constructed pizza based on the user selection, a detailed receipt which shows the cost of each selected item, and the total cost.

> Note: This design allows to easily add more option in the future, also it makes changing the prices very easy which is possible by using the visitor pattern.

### To run the project nicely use the following commands

```c++
cmake -S . -B build
cmake --build build/ 
```

### 2 executables are created, use one of the commands to run an executable

```c++
// run the unit tests
./build/unit_tests

// run the project
./build/my_pizza
```
