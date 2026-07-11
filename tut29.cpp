#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // ctreating a contructer 
    //constructure is a special member function with same name as of the class.It is automatically invoked.
    //it is used to initialize the object of the class
    
    Complex (void);   //constructer declaration
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void)   //---->default constructer as it takes no parameters
{
    a = 10;
    b = 0;
}

int main(){
    Complex c;
    c.printnumber();
    return 0;
}

// properties of contructer
/*
  1. should be declared in the publiuc se=ction of the class.
  2. they should be automatically invoked whenever the object is created.
  3. they cannot return values and do not have return types
  4. they have default arguments
  5. we cannot refer to the address


*/