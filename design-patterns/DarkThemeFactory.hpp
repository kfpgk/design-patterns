#ifndef DARK_THEME_FACTORY_HPP
#define DARK_THEME_FACTORY_HPP

#include <memory>

#include <design-patterns/GuiFactory.hpp>

class DarkThemeFactory : public GuiFactory {

    public:
        virtual std::unique_ptr<Button> createButton();
        virtual std::unique_ptr<Window> createWindow();
        virtual std::unique_ptr<ToolBar> createToolBar();

};

#endif