#include<iostream>
using namespace std;
float mod(float n){
    if(n>=0){
        return n;
    }
    return -n;
}
float angle(float h,float m){
    float angle_h=30*h + m/2;
    //cout<<angle_h;
    float angle_m=6*m;
    //cout<<amgle_m;
    float angle=mod(angle_h-angle_m);
    if(angle>180){
        angle=360-angle;
    }
    return angle;
}

int main(){
    int h;
    int m;
    cout<<"enter time in h m format: ";
    cin>>h>>m;
    cout<<angle(h,m);
    return 0;
}