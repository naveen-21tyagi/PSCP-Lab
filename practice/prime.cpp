#include<iostream>
using namespace std;

int prime(int n){
    for(int i=2;i<n/2;i--){
        if((n%i)==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int res=prime(n);
    if(res==1){
        cout<<"Given number is prime.";
    }
    else{
        cout<<"It is not a prime number.";
    }
    return 0;
}