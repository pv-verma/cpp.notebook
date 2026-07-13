#include <iostream>
using namespace std;

// TEMPLATE FRO SWAPPING TWO VARIABLES
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b ;
    b = temp;
}

int main(){
    int x = 5, y = 7;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}