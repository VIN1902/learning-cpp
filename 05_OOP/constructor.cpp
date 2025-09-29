#include <iostream>
#include <vector>
using namespace std;

class BankForm {
    public:
        string name;
        long amount;
        vector<string> coMembers;

        string* idName;

        //default constructor
        BankForm(){
            name = "XYZ";
            amount = 0;
            coMembers = {"None"};
            cout<<"Default constructor Called."<<endl;
        }

        //parameter constructor
        BankForm(string naam, int amt, vector<string> log){
            name = naam;
            amount = amt;
            coMembers = log;
            cout<<"Parameter constructor called."<<endl;
        }

        //destructor (if say name attribute was dynamically allocated to heap)
        /*
        ~Chai(){
            remove name;
        }
        */

        //copy constructor (if say name attribute was dynamically allocated to heap) - ek baar free krne ke baad you are trying to free it again or access it.
        /*
       Chai(Chai& xyz){
            name = new string(*xyz.name);
            amount = xyz.amount;
            coMembers = xyz.coMembers;
       } 
        */

        void displayDetails(){
            cout<<"Account holder name: "<<name<<endl;
            cout<<"Amount stored in account: "<<amount<<endl;
            cout<<"Other people associated with this account: ";
            for (string coMember : coMembers) {
                cout<<coMember<<" ";
            }
            cout<<endl;
        }
};

void printLine(){
    cout<<"\t----------\t"<<endl;
}

int main(){

    BankForm form1; // constructor called at object creation.
    form1.displayDetails();

    printLine();

    BankForm form2("Vikas", 23423423, {"Harsh", "Sakiv"});
    form2.displayDetails();

    printLine();
    
    BankForm copiedForm = form2;
    copiedForm.displayDetails();
    
    printLine();

    form2.name = "Pawan Kumar";
    form2.displayDetails();
    copiedForm.displayDetails(); // the copied instance is unaffected by change in original instance.

    printLine();

    return 0;
}