#include <iostream>
#include <vector>
#include <string>
using namespace std;

// base/parent/main/original class
class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name, int serve) : teaName(name), servings(serve){} //short-hand for a parameter-constructor
        virtual void brew() {
            cout<<"Brewing "<<teaName<<" with generic method."<<endl;
        } // this is not pure virtual function. But the point of any virtual function is that its expected you will override this in derived class.
        virtual void serve() {
            cout<<"Serving "<<servings<<" cups of "<<teaName<<" with generic method."<<endl;
        }
        virtual ~Tea(){
            cout<<"Called destructor for tea class."<<endl;
        } // usually is kept empty.
};

// derived/child/inheriting class
class GreenTea : public Tea {
    public:
        GreenTea(int serve) : Tea("Green Tea", serve){
            cout<<"Green Tea constructor called."<<endl;
        }
        void brew() override {
            cout<<"Brewing "<<teaName<<" by steeping green tea leaves."<<endl;
        }
        ~GreenTea(){
            cout<<"Green Tea destructor called."<<endl;
        }
};

class MasalaChai : public Tea {
    public:
        MasalaChai(int serve) : Tea("Masala Chai", serve){
            cout<<"Masala Chai constructor called."<<endl;
        }
        void brew() override final{
            cout<<"Brewing "<<teaName<<" with spices and milk."<<endl;
        } // final keyword here means any other class inheriting from this one will not be able to override this brew method. the one from tea class can still be overriden.
        ~MasalaChai(){
            cout<<"Masala Chai destructor called."<<endl;
        }
};

int main(){

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaChai(4);
    // variable is stored on stack, the variable name is directly refering to object/value stored there. (imp)
    // variable is again stored on stack, but this time variable name is refering to the address stored and the actuall object/value is at heap space. (imp)
        // When you use new, memory is allocated dynamically on the heap. It lives on the heap space but all variables must go through stack and there only the address to heap is stored.

    tea1->brew();
    tea1->serve();
    // '->' is just syntax to access methods of a variable that is a pointer directly without derefrencing it first.
    // '->' is shorthand for (*tea1).brew(); (derefrence first and then method)

    tea2-> brew();
    tea2-> serve();

    delete tea1;
    delete tea2;

    return 0;
}