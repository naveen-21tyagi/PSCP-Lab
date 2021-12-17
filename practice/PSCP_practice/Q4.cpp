#include<iostream>
using namespace std;
int prime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 1;
        }
    }
    return n;
}
int prime_numbers(int n,int prime_nmbrs[]){
    int in=0;
    for(int i=2;i<n;i++){
        int res=prime(i);
        if(res!=1){
            prime_nmbrs[in++]=i;
        }
    }
    return in;
}
int main(){
    int n;
    cin>>n;
    int prime_nmbrs[n];
    int count=prime_numbers(n,prime_nmbrs);
    for(int i=0;i<count-1;i++){
        for(int j=i+1;j<count;j++){
            if(prime_nmbrs[i]+prime_nmbrs[j]==n){
                cout<<'\n'<<prime_nmbrs[i]<<" + "<<prime_nmbrs[j]<<" = "<<n;
                break;
            }
        }
    }
    return 0;
}