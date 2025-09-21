# Features of C++
- Statically typed
- Object Oriented Programming
- Platform dependent; compiled language
- For many languages and thier tools, under the hood c++ is working. we use those languages cause they are more abstracted and hence easier to write than c++.
- Very close to system hardware, low-level system understanding and speed
- No garbage collector, manual memory managment, pointers.

# Running
- Get a compiler like MinGW, which is a software for code translation.
- When source code goes through this software (compiler), then it produces executable machine code called binaries.
- You run this binaries like any other program in your computer's OS.
- Following Code in terminal:
```bash
g++ helloworld.cpp -o helloworld
./helloworld
```

# Breakdown of basic cpp program
- '#' is preprocessor directive which is just a command to do some modification to source code, before compilation process begins.
    - '#include <filename>' is a command that specifies the pre-written code of a file to be included in the current source file.
- 'iostream' is a file that has functionalities of input and output written in it.
- OS for execution looks for a 'main' function in binaries first.
- In cpp the prewritten code files like iostream and all thier methods are stored in a seperate space called 'std'. Namespace is the zone which sperates any methods not made by user and std is the nomeclature of the standard files of cpp language.
    - Like, you can make your own 'cout' method to do something but how to differentiate it from cout method made by cpp devs in iostream code file?
    - So by specifying at start that you are using std namespace, it makes sure that by cout you mean the method that lives in a seperate box/space/box called std.
    - You can make your own namespaces too, for seperating code that you write from code that's already written in languange.
    - namespace is box/container and std or anything else is the name of box. box contains code files and its methods that are seperate from other box's methods, even if same name is used.
    - If you don't write using namespace std at start, you can still access methods from any namespace anywhere by mentioning its name followed by 2 colons and follwed by the method you want. Ex: std::cout, std::endl, myNamespace::myMethod.
    - namespace is just a scoping mechanism. std is a namespace that holds the C++ standard library.
    - Other languages also organize their standard libraries in similar "containers," but the mechanism (namespace, package, module) differs by language.
        - C++ namespaces are not libraries — they’re more like containers for names.
        - But since the Standard Library is put inside namespace std, it feels like std is a built-in library.
        - In other languages:
            - Java → uses packages (kind of like namespaces) to organize libraries (java.util.*, java.io.*).
            - Python → uses modules (import math, import os) to group functionality.
            - JavaScript → uses objects/modules (Math.random(), import ... from ...).
            - C++ namespace ≈ Java package ≈ Python module ≈ JS module/object
            - C++ library (like iostream, vector) ≈ Java JDK library ≈ Python standard library
- In main function you specify the return type int to it, so return a integer at the end. Can be any integer for exit code but standard decided says use 0 for succefull operation of any function, otherwise you can use any integer as an exit code you like.
    - Even if you don't write any return integer value the compiler auto writes it at compilation, but you should write one.