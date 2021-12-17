#include<iostream>
using namespace std;
int main(){
    int row=5;
    for(int i=0;i<row;i++){
        int value=1;
        for(int space=row;space>=i;space--){
        cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"  "<<value<<" ";
            value=value*(i-j)/(j+1);
        }
        cout<<endl;
    }
    for(int i=row-2;i>=0;i--){
        int value=1;
        for(int space=i;space<=5;space++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"  "<<value<<" ";
            value=value*(i-j)/(j+1);
        }
    cout<<endl;
    }
}