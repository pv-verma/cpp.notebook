// OOPs  -  Classes and Objects

    /*
    c++ ---> initially called ---> c with classes by stroustroup
    class --> extension of structures (in c)
    structures had limitations
         -> members are public
         -> no methods
    classes = structures + more
    classes -> can have methods and properties
    classes -> can make few members as private & few as public
    structure in c++ are typedefed
    you can declare objects along with the class declaration
    */ 
    /*      class Employee{
               // class definition
          } harry, rohan, lovish;*/  
    //harry.salary = 8 make no sense if salary is private

    //nesting of member functions
#include<iostream>
using namespace std;

 class binary
    {
     // private:
        string s;
        public:
            void read(void);
            void chk_bin(void);
            void ones_compliment(void);
            void display(void);

    };

void binary :: read(void){
    cout<<"enter a binary number "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i=0; i < s.length(); i++ )
{
    if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"incorrect binary format "<< endl;
        exit(0);
    }
}
}

void binary :: ones_compliment(void)
{
    for (int i=0; i < s.length(); i++ ){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    cout<<"displaying your binary number"<<endl;
    for (int i=0; i < s.length(); i++ ){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}