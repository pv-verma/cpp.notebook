#include<iostream>
#include<list>
using namespace std;

class youtubechannel {
public:
    string name;
    string ownername;
    int subscribercount;
    list<string> publisedvidetitles;
};

int main(){
    youtubechannel ytchannel;
    ytchannel.name="codebeauty";
    ytchannel.ownername="saldina";
    ytchannel.subscribercount= 1800;
    ytchannel.publisedvidetitles = {"c++ for beginners video 1","html & css video 1","c++ oop video 1"};

    cout<<"name: "<<ytchannel.name<<endl;
    cout<<"ownername: "<<ytchannel.ownername<<endl;
    cout<<"subscriber count: "<<ytchannel.subscribercount<<endl;
    cout<<"videos: "<<endl;
    for(string videotitle: ytchannel.publisedvidetitles){
        cout<<videotitle <<endl;
    }
    return 0;
}