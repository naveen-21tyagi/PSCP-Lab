#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    // cout<<fact(n);
    for(int i=0;i<n;i++){
        cout<<"  ";
    }
    cout<<1<<endl;
    for(int i=2;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
        // cout<<"a";
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<"   ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>1;i--){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<"   ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<"  ";
    }
    cout<<1<<endl;
    return 0;
}