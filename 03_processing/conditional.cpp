// Conditional = Some code block will be executed or not, based on boolean evaluation of a condition. Then the rest of the code outside the conditional scope continues as usual.

#include <iostream>
using namespace std;

int main(){
    int cups;
    cout << "Number of cups ordered? \n";
    cin >> cups;

    if (cups < 10){
        cout << "You get no discount. "<< endl;
    } else if (cups >= 10 && cups <= 20){
        cout << "You get 10\% discount. "<< endl;
    } else {
        cout << "You get 20\% discount. "<< endl;
    }

    int num;
    cout<<"choose among numbers 1, 2 and 3? \n";
    cin>>num;

    switch(num){
        case 1:
            cout << "you chose 1";
            break;
        case 2:
            cout << "you chose 2";
            break;
        case 3:
            cout << "you chose 3";
            break;
        default:
            cout << "told you to choose among 1, 2 and 3 ONLY";
    }

    // cpp has waterfall issue with switch-cases, so use break to come after each case.

    return 0;
}