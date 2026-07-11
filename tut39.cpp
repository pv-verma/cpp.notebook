#include <iostream>
using namespace std;

class base{
    protected:
       int a;
    private:
       int b;
};
/*
for protected member:
                         public derivation   private deviation   protected deviation
   1.private members   :  not inherited        not inherited       not inherited
   2.protected members :  protected            private             protected  
   3.public members    :  public               private             protected
*/

class derived : protected base{

};

int main(){
    base b;
    derived d;
    // cout <<d.a ;  // will not work as a is protected in both base and derived class
    return 0;
}