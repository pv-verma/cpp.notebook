#include <iostream>
using namespace std;

int main() {
    // What is a Pointer ? ---> data types which holds the address of the other data types
    
    int a=3;
    //int* b= &a;
    int* b;         // alternate way of writing
    b= &a;

    // & ----> (address of) operator
    cout<<"the address of a is "<< &a<<endl;
    cout<<"the address of a is "<< b <<endl;

    // * ---> dereference operator
    cout<<"the value at address b is "<< *b <<endl;

    // Pointer to Pointer 
    int** c= &b ;
    cout<<"the address of b is "<< &b <<endl;
    cout<<"the address of b is "<< c <<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<< endl;
    
    return 0;
}