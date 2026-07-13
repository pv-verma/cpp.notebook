#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // Connecting our file with hout stream
    ofstream hout("sample60.txt");

    // Creating a name variable and filling it with the string entered by the user
    cout<<"Enter your name"<<endl; 
    string name;
    cin>>name;

    // Writing a string to the file
    hout<<name;
    
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    return 0;
}