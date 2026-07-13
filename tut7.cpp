#include <iostream>
using namespace std;

int c= 45;      //c is outside int main function so its globa value for int main function

int main() {
    /*   
    //BUILT IN DATA TYPES
    int a, b, c;
    cout<<"enter the value of a: "<<endl;
    cin>>a ;
    cout<< "enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<" the sum is c: "<<c <<endl;

    cout<<"the globa c is: "<<::c;    // ( :: ) is scope resolution operator  
    */

    /*
    //    FLOAT, DOUBLE AND LONG DOUBLE LITERALS
    float d=34.4F;
    long double e=34.4L;
    
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;

    cout<<"the value of d is: "<<d<<endl<<"the value of e is: "<<e<<endl;
    */

    //   REFERENCE VARIABLES ---> calling same item by different names
    // Rohan Das ---> Monty ---> Rohu ---> DangCoder

    /*
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    */

    //     TYPECASTING 
    int a = 45;
    float b = 45.6;
    cout<<"the value of a is: "<<(float)a<<endl;
    cout<< "the value of a is: "<< float(a)<<endl;

    cout<<"the value of b is: "<<(int)b <<endl;
    cout<< "the value of b is: "<<int(b) <<endl;
    int c= int(b);

    cout<< "the expression is "<<a+b <<endl;
    cout<< "the expression is "<<a+(int)b <<endl;
    cout<< "the expression is "<<a+ int(b) <<endl;

    return 0;
}