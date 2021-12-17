// how many 1 in binary representation
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int count=0;
        for(int j=i;j>0;j=j/2){
            int rem=j%2;
            if(rem==1){
                count++;
            }
        }
        cout<<'\n'<<i<<'\t'<<count; 
    } 
    return 0;
}