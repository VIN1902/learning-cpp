// abstraction but instead of using public access or something like getter-setter, which gives access or expose members to EVERYONE. we use friend which only gives access of private and protected members of a class to only those funcitons or classes we specify as friends.

#include <iostream>
using namespace std;

class EquilateralTriangle{
    
    private:
        float side;
        float circumference;
        float area;
    
    public:
        void set(float len){
            side = len;
            circumference = 3*side;
            area = (1.73*side*side)/4;
        }

        EquilateralTriangle(){
            side = 1;
            circumference = 3;
            area = 0.4325;
        }

    friend void displayInfo(EquilateralTriangle); //friend function
    friend class HomeworkTriangle; // friend class
};

// global function
void displayInfo(EquilateralTriangle instanceName){
    cout<<"The triangle has equal sides of "<<instanceName.side<<" meter"<<endl;
    cout<<"The circumference is "<<instanceName.circumference<<" meter"<<endl;
    cout<<"The area is "<<instanceName.area<<" meter-squared"<<endl;
}

class HomeworkTriangle{
    public:
        void displayInfo(EquilateralTriangle instanceName){
            cout<<"The triangle has equal sides of "<<instanceName.side<<" meter"<<endl;
            cout<<"The circumference is "<<instanceName.circumference<<" meter"<<endl;
            cout<<"The area is "<<instanceName.area<<" meter-squared"<<endl;
        }
};

int main(){

    EquilateralTriangle et1;
    et1.set(6.9);
    displayInfo(et1);

    EquilateralTriangle et;
    HomeworkTriangle tri1;
    tri1.displayInfo(et);

    return 0;
}