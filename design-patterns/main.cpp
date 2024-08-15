#include <iostream>
#include <memory>

#include <config.h>

#include <design-patterns/Singleton.hpp>
#include <design-patterns/SimpleProducts.hpp>
#include <design-patterns/SimpleFactory.hpp>
#include <design-patterns/MeansOfTransport.hpp>
#include <design-patterns/BusinessLogic.hpp>
#include <design-patterns/GuiFactory.hpp>
#include <design-patterns/GuiElements.hpp>
#include <design-patterns/DarkThemeFactory.hpp>
#include <design-patterns/LightThemeFactory.hpp>

void useSingleton();
void useSimpleFactory();
void useFactoryMethod();
void useAbstractFactory();

int main(int argc, char* argv[]) {

    std::cout << "Running example design patterns version " << VERSION_MAJOR << "."
              << VERSION_MINOR << std::endl;

    useSingleton();

    useSimpleFactory();

    useFactoryMethod();

    useAbstractFactory();

    return 0;
}

void useSingleton() {

    std::cout << std::endl; 
    std::cout << "---------- Singleton example -------------" << std::endl;

    Singleton::getInstance().doSomething();

    std::cout << "-----------------------------------------" << std::endl;

}

void useSimpleFactory() {

    std::cout << std::endl; 
    std::cout << "------- Simple Factory example ----------" << std::endl;

    SimpleFactory simpleFactory("Zimple Shoes");

    Shirt shirt = simpleFactory.createShirt();
    Pants pants = simpleFactory.createPants();
    Shoes shoesForMe = simpleFactory.createShoes();
    Shoes shoesForYou = simpleFactory.createShoes();

    simpleFactory.shoeLabel = "Awesome Shoes";
    Shoes shoesForMom = simpleFactory.createShoes();
    Shoes shoesForDad = simpleFactory.createShoes();

    std::cout << "-----------------------------------------" << std::endl;

}

void useFactoryMethod() {

    std::cout << std::endl; 
    std::cout << "------- Factory method example ----------" << std::endl;

    Flight flight;
    RoadTrip roadTrip;
    BoatRide boatRide;

    flight.run();
    roadTrip.run();
    boatRide.run();

    std::cout << "-----------------------------------------" << std::endl;
}

void useAbstractFactory() {

    std::cout << std::endl; 
    std::cout << "------ Abstract factory example ---------" << std::endl;

    DarkThemeFactory darkThemeFactory;
    LightThemeFactory lightThemeFactory;

    GuiFactory& guiFactory = darkThemeFactory;

    std::unique_ptr<Button> onOffButton = guiFactory.createButton();
    std::unique_ptr<ToolBar> toolbar = guiFactory.createToolBar();
    std::unique_ptr<Window> mainWindow = guiFactory.createWindow();
    std::unique_ptr<Window> explorerWindow = guiFactory.createWindow();

    onOffButton->display();
    toolbar->display();
    mainWindow->display();
    explorerWindow->display();

    guiFactory = lightThemeFactory;

    onOffButton = guiFactory.createButton();
    toolbar = guiFactory.createToolBar();
    mainWindow = guiFactory.createWindow();
    explorerWindow = guiFactory.createWindow();

    onOffButton->display();
    toolbar->display();
    mainWindow->display();
    explorerWindow->display();

    std::cout << "-----------------------------------------" << std::endl;
    
}