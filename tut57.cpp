#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
       string title;
       float rating;
    public:
       CWH(string s, float r){
        title = s;
        rating = r;
       }
       virtual void display(){}
};

class CWHVideo: public CWH{
    float videolength;
    public:
       CWHVideo(string s, float r, int vlen) : CWH(s, r){
        videolength  = vlen;
       }
    void display(){
        cout<<"This is an amazing video with title: "<<title<<endl;
        cout<<"Rating : "<<rating<<" Out of 5 stars "<<endl;
        cout<<"The length od this video is: "<<videolength<<" minutes "<<endl; 
    }
};

class CWHText: public CWH{
    int words;
    public:
       CWHText(string s, float r, int wc) : CWH(s, r){
        words  = wc;
       }
    void display(){
     cout<<"This is an amazing text tutorial with title "<<title<<endl;
     cout<<"Rating of this text tutorialis : "<<rating<<" Out of 5 stars "<<endl;
     cout<<"No. of word sin this tutorial: "<<words<<" words "<<endl; 
    }
};


int main(){
    string title;
    float rating, vlen;
    int words;

    // Video CWH
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating , vlen);
    //djVideo.display();

    // Text CWH
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating , words);
    //djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}



// Rules for  virtual functions
/* 
1. They cannot be static
2. They are accessed by object pointer_traits
3. Virtual functions can be a friend of another class 
4. A virtual function in base class might not be used.
5. If a virtual function defined in the base class , there is no nessecity of redefining it in the derived class

*/