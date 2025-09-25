// formal parameter = any variable declared in the defination of a function. Only a placeholder.
// actual parameter/argument = any variable that is passed to a funtion call.

/*
How arguments are passed to a function and how modifications within that function affect the original variables =>
1. call by value = variable's copy is passed to the function's formal parameter. Formal parameter in the function gets its own separate memory location to store this copy. Original variable is NOT changed by function.
2. call by reference = variable's memory address (or a reference) is passed to the function's formal parameter. Both the formal parameter and the actual argument refer to the same memory location. Original variable is changed by function.
*/

// A pointer is a special variable that only memory stores address of some other variable. Pointer is declared by '*'. Address of a variable is accessed by '&'

#include <iostream>
using namespace std;

void modify(int y){
    y += 5;
    cout<<"Y value is "<<y<<endl;
}

void modify(int *y){
    *y += 10;
    cout<<"Y value is "<<*y<<endl;
}

int main(){

    int x = 4;
    modify(x);
    cout<<"X value is "<<x<<endl;

    cout<<"------------------------------ \n";

    modify(&x);
    cout<<"X value is "<<x<<endl;

    return 0;
}