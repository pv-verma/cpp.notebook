#include<iostream>
#include <functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Object(functor): Function wrapped in a class so that it is available like an object
    int arr[]= {1, 33, 4, 2, 54, 7};
    sort(arr, arr+5);     // 7 will not sort cuz we have given instruction for until 5 places
    sort(arr, arr+5, greater<int>());   // greater is used for descending sorting
    for(int i=0; i< 6; i++){
        cout<< arr[i]<<endl;
    }
    return 0;
}