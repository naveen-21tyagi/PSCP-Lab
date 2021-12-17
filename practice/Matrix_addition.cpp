#include<iostream>
using namespace std;
int main(){
    int A[3][3],B[3][3],C[3][3];
    //getting input for Matrix A
    cout<<"Enter Matrix A: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
    //getting input for Matrix B
    cout<<"Enter Matrix B: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>B[i][j];
        }
    }
    //addtion of matices
    cout<<"Addition of Matrices: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}