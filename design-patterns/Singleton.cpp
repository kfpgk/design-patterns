#include <iostream>

#include <design-patterns/Singleton.hpp>

// Ref: https://stackoverflow.com/a/1008289
Singleton& Singleton::getInstance() {
    static Singleton instance;
    return instance;
}

void Singleton::doSomething() {
    std::cout << "Singleton is doing something." << std::endl;
}