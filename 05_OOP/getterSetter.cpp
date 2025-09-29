// another encapsulation method by which the exact way in which members of class will be accessed is controlled.
// setter then not just assignment but if you want processing or not. getter then not just simple display but additional flairs in display.
// designed such that the data is made available to everyone in code using these getter and setter.

#include <iostream>
using namespace std;

class Student {
    string name;
    long rollnumber;
    float cgpa;

    public:
        Student(){
            name = "Jhon Doe";
            rollnumber = 10101010;
            cgpa = 10.00;
        }
        void getStudentInfo(){
            // additional presentation choices
            cout<<"Name: "<<name<<endl;
            cout<<"Enrollment: "<<rollnumber<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
        }
        void setStudentInfo(string naam, long roll, float cg){
            // additional proccessing logic
            name = naam;
            rollnumber = roll;
            cgpa = cg;
        }
};

int main(){

    Student vikas;
    vikas.setStudentInfo("Vikas Indora", 22104039, 6.3);
    vikas.getStudentInfo();

    return 0;
}