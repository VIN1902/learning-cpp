// Iterate over a task/command.
// You need 1. Varibale (to initialize the counter), 2. Condition (to specify till when that counter will update), 3. Inc/Dec (to update the counter). Then the task in body which you want to iterate over.

#include <iostream>
#include <string>
using namespace std;

int main(){

    // while-loop
    int teaCups = 5;
    while(teaCups > 0){
        teaCups--;
        cout<<"serving tea cup. "<<teaCups<<" are remaining"<<endl;
    }

    // do-while-loop
    string response;
    do{
        cout<<"Do you want to keep gooning? (yes/no)"<<endl;
        getline(cin,response);
    } while (response == "yes");

    //for-loop
    for (int i = 1; i <= 5; i++){
        cout << "Brewing instructions for tea "<<i<<endl;
    }

    //break - come out of scope of loop
    string res;
    while(true){
        cout<<"Keep going? (type 'stop' if no)? \n";
        getline(cin,res);
        if(res == "stop"){
            cout<<"No more! \n";
            break;
        }

        cout<<"Okay! \n";
    }

    //continue - skip over specific iteration
    string teaTypes[3] = {"Green Tea",  "Lemon Tea", "Black Tea"};
    for(int i = 0; i < 3; i++){
        if(teaTypes[i] == "Lemon Tea"){
            continue;
        }
        cout << "Tea no. " << i+1 << " is " << teaTypes[i] << endl;
    }

    //nested loop
    for(int i = 0; i < 3; i++){
        cout<<"For "<<teaTypes[i]<<" you get 3 cups"<<endl;
        for(int j=1; j < 4; j++){
            cout<<"Cup "<<j<< " of "<<teaTypes[i]<<endl;
        }
    }

    return 0;
}