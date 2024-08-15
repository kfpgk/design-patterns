#ifndef SIMPLE_PRODUCTS_HPP
#define SIMPLE_PRODUCTS_HPP

#include <string>

class Shirt {
    public:
        Shirt();
};

class Pants {
    public:
        Pants();
};

class Shoes {

    public:
        std::string label;

        Shoes(std::string label);
        
};

#endif