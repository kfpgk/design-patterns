#include <memory>

#include <design-patterns/DarkThemeFactory.hpp>
#include <design-patterns/GuiElements.hpp>

std::unique_ptr<Button> DarkThemeFactory::createButton() {
    return std::make_unique<DarkButton>();
}

std::unique_ptr<Window> DarkThemeFactory::createWindow() {
    return std::make_unique<DarkWindow>();
}

std::unique_ptr<ToolBar> DarkThemeFactory::createToolBar() {
    return std::make_unique<DarkToolBar>();
}