#include <iostream>
using namespace std;

int main(){

    int multiDimesionalArray[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for (int i = 0; i < 3; i++)
    {
        cout<<"-----------------------------------------------------------------"<<endl;
        for (int j = 0; j < 4; j++)
        {
            cout<<"|\t"<<multiDimesionalArray[i][j]<<"\t";
        }
        cout<<"|";
        cout<<endl;
        if (i == 2){
            cout<<"-----------------------------------------------------------------"<<endl;
        }
    }
    

    return 0;
}