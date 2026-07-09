#include <iostream>
using namespace std;

// Function Prototype
//type function -name (argument);
//int sum(int a,b);    // NOT ACCEPTABLE
//int sum(int , int );   // --->ACCEPTABLE
int sum(int a, int b);   // --->ACCEPTABLE
//void g(void);   //ACCEPTABLE
void g();       // ACCEPTABLE

int main() {
    int num1, num2;
    cout<<"enter the first number: "<<endl;
    cin>>num1;
    cout<<"enter the second number: "<<endl;
    cin>>num2;
    //num1, num2 are actual parameters
    cout<<"the sum is "<< sum(num1, num2);
    g();

    return 0;
}

int sum(int a , int b){
    //  Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c= a + b ;
    return c;
}

void g(){
    cout<<"\nhello, good morning";
}