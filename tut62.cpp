#include<iostream>
#include <fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"this is me"<<endl;
    out<<"this is me too he-he";
    out.close();


    ifstream in;
    string st;
    in.open("sample60.txt");
    //in>>st;
    //cout<<st;

    while(in.eof()==0 ){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}