#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
       simple(int a,int b =9){
        data1 = a;
        data2 = b;
       }
       void printdata();
};

void simple :: printdata(){
    cout<<"the value of the data is "<<data1<<" and "<<data2<<endl;
};

int main(){
    simple s1(1,5);
    s1.printdata();

    simple s2(3);
    s2.printdata();
    return 0;
}