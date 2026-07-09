#include <iostream>
using namespace std;

int main() {
    //cout<<"this is tut 9" <<endl;

    int age ;
    cout<<"tell me your age"<<endl;
    cin>>age;

    //  SELECTION CONTROL STRUCTURE : IF , ELSE IF, ELSE :
    /*
    if (age<18) {
        cout<<"you can't come to the party"<<endl;
    }
    else if(age==18) {
        cout<<"you are a kid and you'll get a kid pass"<<endl;
    }
    else {
        cout<<"you can come to the party"<<endl;
    }
        */

    //   SLECTION CONTROL STRUCTURE : SWITCH CASE STATEMENT 
    
    switch (age)
    {
    case 18 :
        cout<< "you are 18"<<endl;
        break;
    case 22 :
        cout<< "you are 22"<<endl;
        break;
    case 2 :
        cout<< "you are 2"<<endl;
        break;
    default:
    cout<<"no special cases"<<endl;
        break;
    }
    cout<<"done with switch case"<<endl;

    return 0;
}