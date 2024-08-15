cmake_minimum_required(VERSION 3.20)

project(design-patterns VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(design-patterns/config.h.in config.h)

add_executable(design-patterns
    design-patterns/main.cpp
    design-patterns/Singleton.cpp
    design-patterns/SimpleProducts.cpp
    design-patterns/SimpleFactory.cpp
    design-patterns/MeansOfTransport.cpp
    design-patterns/BusinessLogic.cpp
    design-patterns/GuiElements.cpp
    design-patterns/DarkThemeFactory.cpp
    design-patterns/LightThemeFactory.cpp
    )

target_include_directories(design-patterns PUBLIC 
    .
    ${PROJECT_BINARY_DIR}
    )