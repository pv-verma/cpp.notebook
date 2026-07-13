#include <iostream>
using namespace std;

/*
float funcAverage(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}

float funcAverage2(int a, float b){
    float avg = (a+b)/2.0;
    return avg;
}
    */
// Instead of using multiple functions we can use a single function template

// TEMPLATE FOR AVERAGE
template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0 ;
    return avg;

}

int main(){
    
    float a;
    a = funcAverage(5, 2.4);

    printf("The average of thse numbers is %.3f", a);
    cout<<endl;
    
    return 0;
}