#ifndef GUI_FACTORY_HPP
#define GUI_FACTORY_HPP

#include <memory>

#include <design-patterns/GuiElements.hpp>

class GuiFactory {

    public:
        ~GuiFactory() = default;
        virtual std::unique_ptr<Button> createButton() = 0;
        virtual std::unique_ptr<Window> createWindow() = 0;
        virtual std::unique_ptr<ToolBar> createToolBar() = 0;

};

#endif