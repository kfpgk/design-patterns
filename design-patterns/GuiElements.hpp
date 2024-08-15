#ifndef GUI_ELEMENTS_HPP
#define GUI_ELEMENTS_HPP

class GuiElement {

    public:
        virtual ~GuiElement() = default;
        virtual void display() = 0;

};

class Button : public GuiElement {

    public:
        virtual ~Button() = default;
        virtual void action();

};
class Window : public GuiElement {

    public:
        virtual ~Window() = default;

};
class ToolBar : public GuiElement {

    public:
        virtual ~ToolBar() = default;

};

class DarkButton : public Button {

    public:
        virtual void display();

};
class DarkWindow : public Window {

    public:
        virtual void display();

};
class DarkToolBar : public ToolBar {

    public:
        virtual void display();

};

class LightButton : public Button {

    public:
        virtual void display();

};
class LightWindow : public Window {
    
    public:
        virtual void display();
    
};
class LightToolBar : public ToolBar {

    public:
        virtual void display();

};

#endif