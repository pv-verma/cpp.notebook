#include <iostream>
using namespace std;



int main(){
    // basic example
    int a = 4;
    int* ptr = &a;

    cout<<"the value of a is "<< *(ptr)<<endl;

    // new keyword
    //int *p = new int(4);
    float *p = new float(4.09);
    cout<<"the value at address p is "<<*(p)<<endl;
    cout<<endl;

    // new operator
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    cout<<endl;

    // delete array
    delete[] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;


    return 0;
}