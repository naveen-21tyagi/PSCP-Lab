#include<iostream>
using namespace std;
int encrypt(int n){
    int a,b,c,d;
    a=n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;

    //encryption
    a=(a+7)%10;
    b=(b+7)%10;
    c=(c+7)%10;
    d=(d+7)%10;

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
    return (c*1000 + d*100 + a*10 + b);   
}
int decrypt(int n){
    int a,b,c,d;
    a=n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;

    a=a+3;
    b=b+3;
    c=c+3;
    d=d+3;

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
    return (c*1000 + d*100 + a*10 + b);
}
int main(){
    int n;
    cout<<"enter to encrypt: ";
    cin>>n;
    cout<<encrypt(n);
    cout<<"\nenter to decrypt: ";
    cin>>n;
    cout<<decrypt(n);

    return 0;
}