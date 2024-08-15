#ifndef LIGHT_THEME_FACTORY_HPP
#define LIGHT_THEME_FACTORY_HPP

#include <memory>

#include <design-patterns/GuiFactory.hpp>

class LightThemeFactory : public GuiFactory {

    public:
        virtual std::unique_ptr<Button> createButton();
        virtual std::unique_ptr<Window> createWindow();
        virtual std::unique_ptr<ToolBar> createToolBar();

};

#endif