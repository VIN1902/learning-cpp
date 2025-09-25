#include <iostream>
using namespace std;

//declaration
void serveFood(int plates);

//declaration + defination
int getTemperature(int temp){
    return temp;
}

//function overloading - differentiate same name function on basis of arguments. If passing a default value then you can call funtion with no arguments even.
void serveFood(string foodType = "Water"){
    cout<<"Serving "<<foodType<<endl;
}

int main(){

    int value = getTemperature(45);
    cout<<"Today is "<<value<<"\u00B0C, very hot!"<<endl;
    serveFood(5);
    serveFood("Biryani");
    serveFood();

    return 0;
}

//defination
void serveFood(int plates){
    cout<<"Serving "<<plates<<" plates of food. \n";
}