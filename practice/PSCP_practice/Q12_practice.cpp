#include<iostream>
using namespace std;
int sequence(int n){
    int term[n+1];
    term[0]=0;
    term[1]=1;
    term[2]=1;
    for(int i=3;i<=n;i++){
    term[i]=term[term[i-1]]+term[i-term[i-1]];
    }
    return term[n];
}
int main(){
    int n;
    cin>>n;
    cout<<sequence(n);
    return 0;
}