#include<iostream>
#include<cmath>
using namespace std;
int pow_10(int i){
    if(i>0)
    return 10*pow_10(i-1);
    if(i==0)
    return 1;
}
int base6_10(int n){
    int sum=0,i=0,rem;
    while(n>0){
        rem=n%10;
        sum+=rem*pow(6,i);
        n/=10;
        i++;
    }
    return sum;
}
int base10_6(int n){
    int sum=0,i=0,rem;
    while(n>0){
        rem=n%6;
        //cout<<rem<<"\n";
        //cout<<rem*pow(10,i);
        int im=rem*pow_10(i);
        cout<<im<<endl;
        sum=sum+im;
        n/=6;
        //cout<<n;
        i++;
    }
    return sum;
}
int main(){
    int n1,n2,a,b,c;
    cin>>n1>>n2;
    a=base6_10(n1);//cout<<a;
    b=base6_10(n2);//cout<<b;
    c=a+b;
    // cout<<pow(10,0);
    // cout<<pow(10,1);
    // cout<<pow(10,2);
    //cout<<pow(10,2);
    //cout<<c;
    cout<<"Sum of given two number: "<<base10_6(c);
    return 0;
}