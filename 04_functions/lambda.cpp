/*
Nameless function. Write at a place and run there only. Used more in frameworks and such. No issues of memory management when functionality is needed only once.
Store the processed result of lambda function in a variable and call that variable with arguments.
*/

#include <iostream>
using namespace std;

int main(){

    auto result = [](int num){
        cout<<"Your Number Times itself is "<<num*num<<endl;
    };

    result(69);

    return 0;
}