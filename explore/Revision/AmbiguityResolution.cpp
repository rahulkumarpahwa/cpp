#include <iostream>
using namespace std;


// when we have same function in the superclasses and then we inherited then which function will be implemented?

class Base1{

    public:
     void greet(){
        cout<<"how are you?"<<endl;
     }
};

class Base2{
    public:
    void greet(){
       cout<<"kaise ho?"<<endl;
    }
};

class Derived : public Base1 , public Base2{
public:

void greet(){
    Base1::greet(); // this will call the base1 greet
   // or write 
    Base2::greet(); // this will call the base2 greet
    // or you can write the function of your own choice
    cout<<"Hello dosto?"<<endl;
}


};

 
int main(){
Base1 b;
Base2 b2;
Derived d;
b.greet();
b2.greet();

d.greet(); // ambiguity here because the d has two options to choose the functions from.




return 0; 
}