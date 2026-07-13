#include<iostream>
using namespace std;

 typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep ;


union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main() {

    enum meal{ breakfast, lunch, dinner};
    meal m1= breakfast;
    cout<< m1<<endl;
    /*
    cout<<breakfast <<endl;
    cout<< lunch<<endl;
    cout<< dinner <<endl;
    */

    /*
    ep harry;
    union money m1;
    m1.rice = 34;
    m1.car = 'c' ;
    cout<<m1.rice<< endl;
    */
    /*
    struct employee shubham;
    struct employee rohan;
    harry.eId = 2;
    harry.favChar = 'c';
    harry.salary = 12000000;
    cout<<"the value is "<<harry.eId<<endl;
    cout<<"the value is "<<harry.favChar<<endl;
    cout<<"the value is "<<harry.salary<<endl;
    */

    return 0;
}