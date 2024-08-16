# Introduction

This repository holds a couple of design pattern examples in <em>C++</em> and their corresponding <em>UML</em> diagrams. Most of the design patterns are based on the book `Design Patterns: Elements of Reusable Object-Oriented Software` by <em>Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides</em>.

# Directory structure

<pre>
(root)
+- design-patterns          # C++ source and header files
|   +- *.cpp
|   +- *.hpp
+- doc                      # plant UML diagrams
|   +- Behavioural
|       +- *.puml     
|   +- Creational
|       +- *.puml          
|   +- Structural
|       +- *.puml           
+- CMakeLists.txt
</pre>

# Build

Steps to build:
```shell
cd design-patterns
mkdir build
cd build
cmake ..
cmake --build .
```