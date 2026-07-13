#include <iostream>
using namespace std;

inline int product(int a, int b){
    // not recommended to use below lines with inline functions
    // static int c= 0;    // this executes only once
    // c = c + 1;      // next time this function is the value of c will be retained
    return a*b;
}
float moneyRecieved(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){
// }

int main(){
    // int a, b;
    // cout<<"enter a and b "<<endl;
    // cin>>a>>b;
    // cout<<"the product is "<< product(a,b)<<endl;
    int money = 100000;
    cout<<"if you have  " <<money<<" Rs in your account, you will recieve "<<moneyRecieved(money)<<" Rs after one year"<<endl;
    cout<<"for VIP: if you have "<<money<<" Rs in your account, you will recieve "<<moneyRecieved(money, 1.1)<<"Rs after one year"<<endl;

    return 0;
}