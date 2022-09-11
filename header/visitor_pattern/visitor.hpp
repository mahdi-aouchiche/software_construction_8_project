#ifndef __VISITOR_HPP__
#define __VISITOR_HPP__

/* Add all concrete classes which can be visited */
class Thick_Crust;
class Thin_Crust;

class Italian_Sauce;
class Chunky_Red_Sauce;
class No_Sauce;

class Mixed_Cheese;
class Mozzarella_Cheese;
class No_Cheese;

class Bell_Peppers;
class Mushrooms;
class Olives;
class Tuna;
class No_Topping;

class Visitor
{  
    public:    
    virtual double visit(Thick_Crust* )       = 0;
    virtual double visit(Thin_Crust* )        = 0;

    virtual double visit(Italian_Sauce* )     = 0;
    virtual double visit(Chunky_Red_Sauce* )  = 0;
    virtual double visit(No_Sauce* )          = 0;
    
    virtual double visit(Mixed_Cheese* )      = 0;
    virtual double visit(Mozzarella_Cheese* ) = 0;
    virtual double visit(No_Cheese* )         = 0;

    virtual double visit(Tuna* )              = 0;
    virtual double visit(Olives* )            = 0;
    virtual double visit(Mushrooms* )         = 0;
    virtual double visit(Bell_Peppers* )      = 0;
    virtual double visit(No_Topping* )        = 0;
};

#endif // __VISITOR_HPP__