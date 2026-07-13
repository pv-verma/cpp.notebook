#include<iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
       void setdata(int a , float b){
        id = a;
        price = b;
       }

       void getData(void){
        cout<<"code of this item is "<<id
        <<endl;
        cout<<"Price of the item is "<<price<<endl;
       }
};



int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    // general store item
    // veggies item
    // hardware item
    shopitem *ptr = new shopitem[size];
    shopitem *ptrTemp = ptr;
    int p, i;
    float q;
    for (int i=0; i< size; i++){
        cout<<"Enter Id and Price of item "<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p, q);
        ptr ->setdata(p, q);
        ptr++;
    }

    for (int j = 0; j< size ; j++){
        cout<<"Item number"<<i+1<<endl;
        ptrTemp ->getData();
        ptrTemp++;
    }

    return 0;
}