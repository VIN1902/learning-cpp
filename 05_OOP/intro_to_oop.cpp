/*
Vector is a class template from standard library, for sequence containers.
Just like array was for same thing 'continous memory allocation'.
Key difference between them is vectors supports fast random-access and performance friendly.
*/

/*
Class name is with capital letter start.
Object/instance name is lower-case start.
*/

/*
Access modifiers:
1. Public means class stuff available to all instances
2. Private means class stuff available to class alone (default)
3. Protected means class stuff available to derived classes
*/

#include <iostream>
#include <vector>
using namespace std;

class BankForm {
    public:
        // Data Members (attributes)
        string name; // Name of applicant
        long amount; // Amnt stored in bank
        vector<string> coMembers; // List of other people who can access the account

        // Member Functions (Methods)
        void displayDetails(){
            cout<<"Account holder name: "<<name<<endl;
            cout<<"Amount stored in account: "<<amount<<endl;
            cout<<"Other people associated with this account: ";
            for (string coMember : coMembers) {
                cout<<coMember<<", ";
            }
        }
};

int main(){

    // instance of class (object)
    BankForm personOne;
    personOne.name = "Vikas Indora";
    personOne.amount = 3432113;
    personOne.coMembers = {"Urmila Indora", "Virender Kumar Indora"}; // vector is kind-of implemented as array only behind the scene.
    personOne.displayDetails();

    return 0;
}

