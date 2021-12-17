#include<iostream>
using namespace std;
int main(){
    int row=5;
    for(int i=1;i<row;i++){
        for(int space=i;space<row;space++){
            cout<<"   ";
        }
        for(int star=1;star<=2*i-1;star++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=row-2;i>0;i--){
        for(int space=i;space<row;space++){
            cout<<"   ";
        }
        for(int star=2*i-1;star>0;star--){
            cout<<" * ";
        }
        cout<<endl;
    }
}