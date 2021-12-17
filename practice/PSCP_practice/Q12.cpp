#include<iostream>
using namespace std;
int newman_conway(int n){
    if(n==1 || n==2){
        return 1;
    }
    return newman_conway(newman_conway(n-1))+newman_conway(n-newman_conway(n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<newman_conway(n);
    return 0;
}