#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // below line means that non member - sumcomplex function is allowed to access and change with private (members)

    friend complex sumcomplex(complex o1, complex o2);

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a, o2.a), (o1.b, o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printnumber();

    c2.setNumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}

/*properties of friend function

1. not in the scope of class
2. since it is not in the scope of the class it cannot be called from the object of the class. c1.complex() == invalid
3. can be invoked without the hepl of object
4. usually contains the object as arguments
5. can be declared inside public or private sections of the class
6. it cannot access the members directly by the names and need object_name.memebers_name to access any member.

*/