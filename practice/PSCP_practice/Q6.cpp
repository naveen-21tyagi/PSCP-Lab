#include<iostream>
using namespace std;
float fibonacci_num(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci_num(n-1)+fibonacci_num(n-2);
}
float fibonacci_den(int n){
    if(n==1){
        return 2;
    }
    else if(n==2){
        return 3;
    }
    return fibonacci_den(n-1)+fibonacci_den(n-2);
}
int main(){
    int n;
    float sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=(fibonacci_num(i)/fibonacci_den(i));
    }
    cout<< sum;
    return 0;
}