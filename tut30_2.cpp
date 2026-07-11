#include<iostream>
using namespace std;

class Point{
    int x, y ;
    public:
       Point (int a, int b){
        x = a;
        y = b;
       }
    void displaypoint(){
        cout<<"the point is ("<<x<<" , "<<y<<")"<<endl;
    }
};

// create a function which takes 2 point objects and computes distance between them

int main(){
    Point p(1,1);
    p.displaypoint();
    Point q(4,6);
    q.displaypoint();
    return 0;
}