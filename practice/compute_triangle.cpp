#include<iostream>
#include<cmath>
using namespace std;
void computeTraingle(float &a,float &p,float x1,float x2,float x3){
    p=x1+x2+x3;
    float s=p/2;
    a=sqrt(s*(s-x1)*(s-x2)*(s-x3));
}
int main(){
    float x1,x2,x3,a,p;
    cout<<"enter sides: ";
    cin>>x1>>x2>>x3;
    computeTraingle(a,p,x1,x2,x3);

    cout<<"Area: "<<a<<"\tPerimeter: "<<p;
    return 0;
}