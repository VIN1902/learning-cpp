#include <iostream>
#include <string>
using namespace std;

int main(){
    int teaLeaves = 5;
    float waterTemperature = 100.38;
    double price = 312.321323987;
    char teaGrade = 'A';
    bool isTeaReady = false;

    cout << isTeaReady << endl; // 0

    // modifiers keywords give extra meaning/context to datatypes by altering thier behavior/characteristics: 1. Type (signed,unsigned,long,short) 2. Acces (public,private)
    unsigned int score = 50; // can now only take non-negative integers otherwise garbage value

    // type casting
    int total = teaLeaves * (int)price;
    cout<<total<<endl;

    // string
    string myName = "Vikas Indora";

    return 0;
}