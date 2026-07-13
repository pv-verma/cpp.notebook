#include <iostream>
using namespace std;

int main() {
    /*  LOOPS IN C++ :
    There are 3 types of loops in c++ :
    1. for loop
    2. while loop
    3. do-while loop
    */

    /* for loop in c++ */
    /*
    int i=1;
    cout<< i<<endl;
    i++ ;
    */

    // Syntax for FOR loop
    // for (initialisation; condition, updation)
    // {
    //    loop body( c++ code );
    //  }
    
    /*
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<<endl;

    }
    */

    // WHILE LOOP in C++ 
    // syntax :
    /*
    while (condition)
    {
        c++ statements;
    }
        */
    //Printing 1 - 10 using while loop
    /*
    int i = 1;
    while(i<=10) {
        cout<< i <<endl;
        i++ ;
    }
        */
    
    // DO - WHILE loop
    //syntax 
    /*
    do 
    {
        c++ statement;
    } while (condition);
    */

    // DO WHILE loop
    /*
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=10);
    */
    // table of 2
    /*
    int i=0;
    for (int i=0; i<=20;i++)
    {
        cout<<i<<endl;
        i++ ;
    }
    */

    //tables with for loop
    int i=1;
    int table;
    cout<<"this is table of: ";
    cin>>table;
    for (int i=1;i<=10;i++)
    {
        cout<< (i*table)<<endl;
    }
    return 0;
}