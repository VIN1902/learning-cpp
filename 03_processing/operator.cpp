// operator is performs operations on one or more operands. uninary, binary and ternary operators.
// main porgram -> conditional either -> true evaluation or -> false evaluation -> then based on any one the program continues.

#include <iostream>
using namespace std;

int main(){
    int cups;
    double totalPrice, pricePerCup, discountedPrice;

    cout << "How many cups? \n";
    cin >> cups;
    cout << "Price per cup? \n";
    cin >> pricePerCup;
    totalPrice = cups * pricePerCup;

    //apply 5% discount if total is above 100
    if (totalPrice > 100) {
        discountedPrice = totalPrice - (0.05 * totalPrice);
        cout << "Your final amount is " << discountedPrice << endl;
    } else {
        cout << "Your final amount is " << totalPrice << endl;
    }

    //based on bag he has give him extra 5 if has less than 10, update the original number
    int teaBags;
    cout << "How many teaBags? \n";
    cin >> teaBags;
    if (teaBags < 10) {
        teaBags += 5;
        // teaBags = teaBags + 5;
        cout << "Now you have" << teaBags << "teaBags. \n";
    } else {
        cout << "You have sufficient teaBags.\n";
    }

    return 0;
}

/*
Operators:
1. Arithematic (+,-,*,%,/)
2. Assignment (=, +=, -=, *=, %=, /=)
3. Relational (<,>,=<,>=)
4. Logical (&&, ||)
5. Bitwise (&,|,^(xor),~(not),>>(right-shift),<<(left-shift))
*/