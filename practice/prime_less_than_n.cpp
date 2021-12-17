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
    int prime_number[n],count;
    for(int i=2;i<n-1;i++){
        int res=prime(i);
        if(res==1){
            prime_number[count++]==i;
        }
    }
    if(count==0){
        cout<<"No prime number is there.";

    }
    return 0;
}