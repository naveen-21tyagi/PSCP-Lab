#include<iostream>
using namespace std;
int binary(int n,int bin[8]){
    static int i=0;
    while(n>0){    
        bin[i++]=n%2;
        return binary(n/2,bin);
    }
    return i;
}
int main(){
    int n,bin[8];
    cin>>n;
    int len=binary(n,bin);
    for(int i=len-1;i>=0;i--){
        cout<<bin[i];
    }
    short count=0;
    for(int i=0;i<len;i++){
        if(bin[i]==1){
            count++;
        }
    }
    cout<<endl<<len<<"\t"<<count;
    return 0;
}