#include <iostream>
#include <vector>
#include <string>
using namespace std;

// base/parent/main/original class
class Tea{
    protected:
        string teaName;
        int servings;
    public:
        Tea(string name, int serve) : teaName(name), servings(serve){} //short-hand for a parameter-constructor
        virtual void brew() {
            
        } // this is not pure virtual function. But the point of any virtual function is that its expected you will override this in derived class.
};

int main(){



    return 0;
}