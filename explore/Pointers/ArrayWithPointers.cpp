#include <iostream>
using namespace std;

int main(){

    int marks[4] = {23, 45,56, 67};
    // cout<<marks[0] <<"\n";
    // cout<<marks[1] <<"\n";
    // cout<<marks[2] <<"\n";
    // cout<<marks[3] <<"\n";

    // int marks2[4];
    // marks2[0] = 90;
    // cout<<marks2[1]<<"\n"; // garbage value
    // cout<<marks2[0]<<"\n";
    // cout<<marks2[2]<<"\n"; // garbage value

    int size = sizeof(marks) / sizeof(int);

    for(int i = 0; i<size; i++){
        cout<<marks[i]<<"\n";
    }

    int j =0;

    while(j<size){
        cout<<marks[j]<<"\n";
        j++;
    }


    // pointers and arrays
    int *p = marks;
    cout<<"the value of the starting value of array is "<<*p<<"\n";
    cout<<"the value of the second value of array is "<<*(p + 1)<<"\n";
    cout<<"the value of the third value of array is "<<*(p+2)<<"\n";

    

    return 0;
}
