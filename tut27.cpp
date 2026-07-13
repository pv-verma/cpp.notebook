#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator{
    public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
};

class complex
{
    int a, b;
    //friend int calculator ::sumrealcomplex(complex, complex);
    
    // friend int calculator :: sumrealcomplex(complex, complex);

    friend class calculator;
    public:
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
        } 
    void printnumber()
    { 

        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a, o2.a);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    return 0;
}