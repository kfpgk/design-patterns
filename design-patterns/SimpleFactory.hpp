#ifndef SIMPLE_FACTORY_HPP
#define SIMPLE_FACTORY_HPP

#include <string>

#include <design-patterns/SimpleProducts.hpp>

class SimpleFactory {

    public:
        std::string shoeLabel;

        SimpleFactory(std::string shoeLabel);
        Shirt createShirt();
        Pants createPants();
        Shoes createShoes();        

};

#endif