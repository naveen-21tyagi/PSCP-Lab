#include<iostream>
using namespace std;
int main(){
    int h,min;
    cin>>h>>min;
    if(h>12){
        h-=12;
        cout<<h<<" : "<<min<<" PM";
    }
    else{
        cout<<h<<" : "<<min<<" AM";
    }
    
    return 0;
}