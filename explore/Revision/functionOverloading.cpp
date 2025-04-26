#include <iostream>
#include <cmath>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

string sum(string a, string b){
    return a + b; // string get concatenated.
}

 
int volume (int radius, int height){ // of cylinder
    return M_PI * radius * radius * height;
}

int volume(int radius){ // of sphete
    return (4/3) * M_PI * radius * radius * radius;
}


int main(){
 cout<<sum(23, 67)<<"\n";
 cout<<sum(23, 67, 67)<<"\n";
 cout<<sum("apple" , "mango")<<"\n";
 cout<<volume(3, 5)<<"\n";
 cout<<volume(3)<<"\n";
 
 
return 0; 
}