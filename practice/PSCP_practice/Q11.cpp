#include<iostream>
using namespace std;
void multiply(int real1,int real2 ,int imaginary1 ,int imaginary2){
    int a,b,c,d;
    a=real1;
    b=imaginary1;
    c=real2;
    d=imaginary2;
    cout<<a*c-b*d<<" + i"<<b*c+a*d;
}
int main(){
    int real1,real2,imaginary1,imaginary2;
    cout<<"Enter real part of First complex number: ";
    cin>>real1;
    cout<<"Enter imaginary part: ";
    cin>>imaginary1;
    cout<<"Enter real part of second complex number: ";
    cin>>real2;
    cout<<"Enter imaginary: ";
    cin>>imaginary2;
    multiply(real1,real2,imaginary1,imaginary2);
    return 0;
}