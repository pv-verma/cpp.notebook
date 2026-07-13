#include <iostream>
using namespace std;

int main() {

    //  ARRAY EXAMPLE
    //  method 1
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 738;
    mathmarks[2] = 378;
    mathmarks[3] = 78;

    cout<<"these are math marks"<<endl;
    cout<< mathmarks[0]<<endl;
    cout<< mathmarks[1]<<endl;
    cout<< mathmarks[2]<<endl;
    cout<< mathmarks[3]<<endl;
    
    //   method 2
    int marks[4] ={23,45,56,89};

    marks[2] = 455;     // you can change value of an array
    cout<<"these are marks"<<endl;
    /*
    cout<< marks[0] << endl;
    cout<< marks[1] << endl;
    cout<< marks[2] << endl;
    cout<< marks[3] << endl;
       */
    
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks "<< i <<" is "<< marks[i]<<endl;
    }

    // quyick quiz : do the same using while and do-while loop...


    //   POINTERS AND ARRAYS 
    int* p = marks;
    cout<<"the value of *(p) is "<< *p<<endl;
    cout<<"the value of *(p+1) is "<< *(p+1)<<endl;
    cout<<"the value of *(p+2) is "<< *(p+2)<<endl;
    cout<<"the value of *(p+3) is "<< *(p+3)<<endl;

    return 0;
}