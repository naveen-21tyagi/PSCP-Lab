#include<iostream>
#define e 2.718281
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    cout<<'\t';
    for(float j=0;j<1;j+=0.1){
        cout<<setw(7)<<j<<"  ";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<i<<'\t';
        for(float j=0;j<1;j+=0.1){
            cout<<setw(7)<<pow(e,i+j)<<"  ";
        }
        cout<<"\n\n";
    }
    return 0;
}