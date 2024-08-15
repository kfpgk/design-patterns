#include <iostream>

#include <design-patterns/SimpleProducts.hpp>

Shirt::Shirt() {
    std::cout << "Shirt created." << std::endl;
}

Pants::Pants() {
    std::cout << "Pants created." << std::endl;
}

Shoes::Shoes(std::string label) : label{label} {
    std::cout << "Shoes created with label '" << this->label << "'." << std::endl;
}