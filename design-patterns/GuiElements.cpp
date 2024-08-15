#include <iostream>

#include <design-patterns/GuiElements.hpp>

void Button::action() {
    std::cout << "Perform action on button pressed" << std::endl;
}

void DarkButton::display() {
    std::cout << "Display dark button" << std::endl;
}

void DarkWindow::display() {
    std::cout << "Display dark window" << std::endl;
}

void DarkToolBar::display() {
    std::cout << "Display dark tool bar" << std::endl;
}

void LightButton::display() {
    std::cout << "Display light button" << std::endl;
}

void LightWindow::display() {
    std::cout << "Display light window" << std::endl;
}

void LightToolBar::display() {
    std::cout << "Display light tool bar" << std::endl;
}