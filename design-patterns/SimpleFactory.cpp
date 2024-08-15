#include <iostream>

#include <design-patterns/SimpleFactory.hpp>

SimpleFactory::SimpleFactory(std::string shoeLabel) : shoeLabel{shoeLabel} { }

Shirt SimpleFactory::createShirt() {
    Shirt shirt;
    return shirt;
}

Pants SimpleFactory::createPants() {
    Pants pants;
    return pants;
}

Shoes SimpleFactory::createShoes() {
    Shoes shoes(shoeLabel);
    return shoes;
}