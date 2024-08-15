#include <memory>

#include <design-patterns/LightThemeFactory.hpp>
#include <design-patterns/GuiElements.hpp>

std::unique_ptr<Button> LightThemeFactory::createButton() {
    return std::make_unique<LightButton>();
}

std::unique_ptr<Window> LightThemeFactory::createWindow() {
    return std::make_unique<LightWindow>();
}

std::unique_ptr<ToolBar> LightThemeFactory::createToolBar() {
    return std::make_unique<LightToolBar>();
}