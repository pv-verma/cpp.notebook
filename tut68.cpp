#include <iostream>
using namespace std;

template <class T>
class Harry{ 
    public:
       T data;
       Harry (T a){
        data = a;
       }
       void display();
};

template <class T>
void Harry<T>:: display(){
    cout<<data;
}

void func(int a){           // Exact match
    cout<<"I'm first func() "<<a<<endl;
}

template <class T>          // template
void func1(T a){
    cout<<"I'm templatised func()"<<a<<endl;
}       
int main(){
   /* Harry <float> h(5.95);
    cout<<h.data<<endl;
    h.display();
    */

    func(4);    // Exact match takes the highest priority
    func1(4);   
    return 0;
}