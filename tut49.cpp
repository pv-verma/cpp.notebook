#include<iostream>
using namespace std;

/*
Syntax for initialisation list in constructors:
constructor (srgument- list) : initialisation - section
{
   assignment + other code;
}
*/
class test{
   int a;
   int b;
   public:
    // test(int i, int j): a(i) , b(j){
    // test(int i, int j): a(i), b(i+j){
    // test(int i, int j): a(i), b(2 * j){
    // test(int i, int j): a(i), b(a + j){
    // test(int i, int j): b(j), b(i + b){   // RED FLAG this will create problems beacause a will be initialise first
    

    test(int i, int j ): a(i)
    {
        b = j;
        cout <<"constructor executed "<<endl;
        cout<<" the value of a is "<<a <<endl;
        cout<<" the value of b is "<<b <<endl;
    }
};

int main(){
    test t(4, 6);

    return 0;
}