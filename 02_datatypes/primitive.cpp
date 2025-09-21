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
    string myName = "Vikas Indora \n"; // '\n' is escape-line token
    string desc = "Know as \"best\" programmer \n"; // '\' is escape-character token, and many more such escape-sequences are there.

    //input
    string ans;
    cout<<"is your name "<< myName<<" correct? \n";
    getline(cin, ans);
    cout<<"you chose "<<ans<<endl;

    cout<<"are you new to programming? \n";
    cin >> ans;
    cout<<"you chose "<<ans<<endl;

    return 0;
}

/*
Dataypes:
1. Primitives (in-built to cpp language direct support, fundametal to build more complex ones)
    - int
    - float
    - double
    - char
    - boolean
    - void: means empty is cpp. think of fetching temperature from a server, you won't fetch 0 or undefined, but if you didn't get any temp at all then its said to be null/empty/void.

2. Derived (combining or modifying the primitive ones)
    - array
    - string
    - function
    - pointers
    - reference

3. User-defined (modeled by programmer to signify real-world entity)
    - structure (think of bank form)
    - enum
    - union
    - class
    - typedef
*/