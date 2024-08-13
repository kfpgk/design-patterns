#include <iostream>

#include <config.h>

#include <design-patterns/singleton.hpp>

void useSingleton();
void useFactory();

int main(int argc, char* argv[]) {

    std::cout << "Running example design patterns version " << VERSION_MAJOR << "."
              << VERSION_MINOR << std::endl;

    useSingleton();

    return 0;
}

void useSingleton() {

    std::cout << std::endl; 
    std::cout << "---------- Singleton example -------------" << std::endl;

    Singleton::getInstance().doSomething();

    std::cout << "-----------------------------------------" << std::endl;

}

void useFactory() {

    std::cout << std::endl; 
    std::cout << "---------- Factory example --------------" << std::endl;



    std::cout << "-----------------------------------------" << std::endl;

}