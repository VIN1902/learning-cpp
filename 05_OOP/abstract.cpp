/*
- abstract classes
    - if a class consists of atleast 1 virtual function. meaning class doesn't has details of implementation just an overview.
    - usually abstract class doesn't have its own instance, its expected that another derived class with all the definations will have its objects.
- virtual functions
    - the function doesn't have any implementation at that moment, its just for conveying the idea at a broad level.
    - any derived class must define the virtual functions of parent class.
    - '= 0' is just syntax to convey that there's no implementation. it has nothing to do with assignment operator.
*/
#include <iostream>
using namespace std;

class Tea {
    public:
        virtual void prepIngredients() = 0; // pure virtual function, presence of even one of this makes this class an abstract class
        virtual void brewTea() = 0;
        virtual void serveTea() = 0;
};

class Chai : public Tea{ // chai is a derived class inheriting from tea class
    public:
        void prepIngredients() override { // override keyword to connect it to virtual functions of abstract class.
            cout<<"Add leaves, water, spices and gas."<<endl;
        }
        void brewTea() override {
            cout<<"Brew tea in utensil with all the preped ingredients."<<endl;
        }
        void serveTea() override {
            cout<<"Serve the tea."<<endl;
        }

};

int main(){

    Chai cup1;
    cup1.prepIngredients();
    cup1.brewTea();
    cup1.serveTea();

    return 0;
}

/*
Why even use OOP in a program like this:

1. You have variations of the same “thing”
Suppose you want GreenTea, BlackTea, MasalaChai, etc. Each has different prep/brewing steps, but all share the same “tea-making” flow. With OOP, you define the abstract steps once in the base Tea class, then override only the parts that differ.
Without OOP, you’d repeat code or juggle if/else blocks.

2. You want extendability without touching old code
If tomorrow someone adds HerbalTea, you just make a new class. No need to rewrite existing functions or add switch statements. This is the Open/Closed Principle at work (OOP ideology).

3. You’re modeling real-world entities
In large projects (UI widgets, game objects, simulation entities), thinking in terms of “objects with state + behavior” is natural and avoids a tangled mess of global functions.

4. Encapsulation and contracts
The abstract base class Tea says:
“Every Tea must have prepIngredients, brewTea, and serveTea.”
That contract prevents mistakes — anyone writing a new tea type can’t forget a step.
*/