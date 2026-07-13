#include<iostream>
using namespace std;

class BaseClass{
    public:
       int var_base=1;
       virtual void display(){    // virtual overwrite deault function to display base class to display derived class
        cout<<"1 Displaying Base class variables var_base "<<var_base<<endl;
       }
};

class DerivedClass : public BaseClass{
    public:
       int var_derived=2;
       void display(){
        cout<<"2 Displaying Base class variables var_base "<<var_base<<endl;
        cout<<"2 Displaying derived class variables var_derived "<<var_derived<<endl;
       }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj1;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer ->display();
    return 0;
}