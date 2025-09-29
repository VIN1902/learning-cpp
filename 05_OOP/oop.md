# Introduction
- A programming style. Cpp supports multiple styles 1. Functional 2. Object Oriented
- Think of it as bank forms. One original structure/blueprint (class) of form with empty/variable fields is made and then each customer is handed a copy(instance) of that original class, in which they can add their unique data. Every instance is seperate from one-another.

# Class
- Attributes
    - all the variables declared inside a class.
- Methods
    - all the functions declared and defined inside a class.

# Objects
- access the attributes and methods using '.' notation.

# Constructor
- whenever object is made constructor is called automatically.
- doesn't take any datatype specification during declaration.
- uses exact name of class.
- there exists a base constructor if you don't make any which is made by compiler. but you can make your own and override it.
- default, parameter, copy, destructor.

# OOP core ideologies
- bundle of ideas and practices.
1. Encapsultion
- data hiding and bundling; bundle the members of entity (data & methods) into a class and control thier direct access from outside.
- focus on how the data is hidden by controlling access.
- concepts:
    - basic class and objects
    - access modifiers
        - public, private, protected
    - getter and setter
        - special methods that only act as a way to provide everyone restricted (not full) access to private members. prevent direct access/modification of sensitive members.
    - friend functions/classes
        - expose private and protected members to only those declared as friends to the class and not to everyone like in cases above.
2. Abstraction
- hiding implementation details. structure is important rather than full implementation.
- focus on what details are hidden in object.
- seperate the concers into layers, not one thing doing all.
- concepts:
    - abstract classes
        - if a class consists of atleast 1 virtual function. meaning class doesn't has details of implementation just an overview.
        - usually this class doesn't have its own instance, its expected that another derived class with all the definations will have its objects.
    - virtual functions
        - the function doesn't have any implementation at that moment, its just for conveying the idea at a broad level.
        - any derived class must define the virtual functions of parent class.
        - '= 0' is just syntax to convey that there's no implementation. it has nothing to do with assignment operator.
3. Inheritance
- One class can derive properties and behavior from another, forming hierarchies.
- concepts:
    - derived classes
    - overriding parent methods
    - types: single, multiple, virtual, etc.
4. Polymorphism
- Ability of different objects to respond to the same function call in different ways.
- concepts:
    - function or operator overloading.
