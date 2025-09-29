/*
Array - continous memory location: visualize it like randomly data kept anywhere in space in containers, but the address order of those containers is fixed (which container will come after this one). Its not exactly left-to-right, top-to-bottom blocks of data containers one after the other.
*/

/*
Heap is dynamic memory where allocation and de-allocation is handled by programmer. Dynamically grows the space required to store data by requesting it from computer's main memory.
Stack is memory where by defualt all languages work and the existence of stuff (variable, funcitons, etc) is auto-deleted when execution ends. Fixed memory space where you can store a pre-defined amount of data.
*/

#include <iostream>
using namespace std;

int* prepareDynamicArray(int arrayLength){
    // new keyword for putting it in heap instead of deafult stack.
    int* arrayPointer = new int[arrayLength];
    for (int i = 0; i < arrayLength; i++){
        arrayPointer[i] = (i + 10) * 45;
    }
    return arrayPointer; // this storage is only for the address of 1st element of continous sequence in heap.
}

int main(){

    int arrayLength = 5; // different variable from that in function cause of scoping.
    int* myArray = prepareDynamicArray(arrayLength);
    for (int i = 0; i < arrayLength; i++){
        switch(i){
            case 0:
                cout<<i+1<<"st"<<" value of array is "<<myArray[i]<<endl;
                break;
            case 1:
                cout<<i+1<<"nd"<<" value of array is "<<myArray[i]<<endl;
                break;
            case 2:
                cout<<i+1<<"rd"<<" value of array is "<<myArray[i]<<endl;
                break;
            default:
                cout<<i+1<<"th"<<" value of array is "<<myArray[i]<<endl;
                break;
        }
    }
    
    delete[] myArray; //manuall memory de-allocation in heap for cpp

    return 0;
}