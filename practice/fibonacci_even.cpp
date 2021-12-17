#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2 ||n==3){
        return 1;
    }
    return fibonacci(n-1)+ fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    int fibonacci_sequence[n],res=0;
    int in=0;
    for(int i=1;true;i++){
        res=fibonacci(i);
        if(res>n){
            break;
        }
        if(res%2==0){
            fibonacci_sequence[in++]=res;
        }
    }

    for(int i=0; i<in; i++){
        cout<<fibonacci_sequence[i]<<" ";
    } 
    return 0;
}