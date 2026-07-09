#include <iostream>

using namespace std;

int main() {

    int a=4 , b=5 ;
    cout<<"operators in c++"<<endl;
    cout<< " following are the types of operator in c++"<<endl;
    // arithmetic operators 
    cout << " the value of a+b is "<< a+b<<endl;
    cout << " the value of a-b is "<< a-b<<endl;
    cout << " the value of a*b is "<< a*b<<endl;
    cout << " the value of a/b is "<< a/b<<endl;
    cout << " the value of a%b is "<< a%b<<endl;
    cout << " the value of a++ is "<< a++<<endl;
    cout << " the value of a-- is "<< a--<<endl;
    cout << " the value of ++a is "<< ++a<<endl;
    cout << " the value of --a is "<< --a<<endl;
    cout <<endl;
    cout <<endl;

    /*assignment operators -- used to assign values to variables 
      int a=3 , b=6 ;
      char d= 'd'; */ 

    /* comparision operators */
    cout<<"following are comparision operators--"<<endl; 
    cout<<"the value of a == b is "<< (a==b)<<endl;
    cout<<" the value of a != b is "<<( a!=b )<<endl;
    cout<<" the value of a >= b is "<< (a>=b) << endl;
    cout<<"the value of a <= b is "<< (a<=b)<<endl;
    cout<<" the value of a > b is "<< (a>b) <<endl;
    cout<<" the value of a < b is "<< (a<b) << endl;
    cout<<endl;
    cout<<endl;

    //logical operators 
    cout<<" following are the logical operators in c++"<<endl;
    cout <<" the value of this logical and operator ((a==b) && (a<b)) is : "<< ((a==b) && (a<b))<<endl;
    cout <<" the value of this logical or operator ((a==b) || (a<b)) is : "<< ((a==b) || (a<b))<<endl;
    cout <<" the value of this logical not operator (!(a==b)) is : "<< (!(a==b))<<endl;


    return 0;
}