#include <iostream>
using namespace std;

// base class
class employee{
    
    
    public:
       int id;
       float salary;
       employee(int inpid){
        id = inpid;
        salary = 34.0;
       }
       employee(){}
};

// derived class syntax
/*
class {{derived class name}} : {{visibility mode}} {{base class name}}
{
    class members /methods/etc...
}
notes :
   1. default visibility mode is private
   2. public visibility mode : public members of base class becomes public members of derived class 
   3. private visibility mode : public members of base class becomes private members of derived class 
   4. private members are never inherited
*/

// creating a programmer class derived from employee base class
class programmer : employee{
    public:
       int languagecode; 
       programmer (int inpid){
        id = inpid;
        languagecode = 9; 
       }
       
       void getdata(){
        cout<<id<<endl;
       }
};

int main(){
    employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}