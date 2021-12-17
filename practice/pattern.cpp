#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<n+1;i++){
        for(int j=i;j<n;j++){
            cout<<"--";
        }
        for(int j=n; j>n-i; j--){
            cout<<j<<"-";
        }
        for(int j=n-i+2; j<n+1; j++){
            cout<<j<<"-";
        }
        for(int j=i;j<n;j++){
            cout<<"--";
        }
        cout<<endl;
    }
    return 0;
}