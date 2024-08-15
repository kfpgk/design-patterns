#include <iostream>

#include <design-patterns/MeansOfTransport.hpp>

void Plane::load() {
    std::cout << "Plane loaded" << std::endl;
}

void Plane::move() {
     std::cout << "Plane moving" << std::endl;   
}

void Plane::stop() {
    std::cout << "Plane landed" << std::endl;    
}

void Car::load() {
    std::cout << "Car loaded" << std::endl;
}

void Car::move() {
    std::cout << "Car moving" << std::endl;    
}

void Car::stop() {
    std::cout << "Car stopped" << std::endl;  
}

void Ship::load() {
    std::cout << "Ship loaded" << std::endl;
}

void Ship::move() {
    std::cout << "Ship moving" << std::endl;    
}

void Ship::stop() {
    std::cout << "Ship docked" << std::endl;    
}