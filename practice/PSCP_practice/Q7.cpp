#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b>0){
        return a*pow(a,b-1);
    }
    else{
        return 1;
    }
}
int main(){
    cout<<pow(10,3);
    return 0;
}