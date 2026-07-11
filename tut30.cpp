#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
       Complex (int , int);
        void printnumber()
        {
        cout << "your number is " << a << " + " << b << "i" << endl;
        }
};

Complex :: Complex(int x, int y)   //---->parameterised constructer as it accpets 2 parameters
{
    a = x;
    b = y;
}

int main(){
    // implicit call
    Complex a(4,6);

    // explicit call 
    Complex b = Complex(5,7);
    a.printnumber();
    b.printnumber();
    return 0;
}