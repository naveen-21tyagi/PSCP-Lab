#include<iostream>
using namespace std;
int mat_multi_ele(int A[][3],int B[][3],int r,int c){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=A[r][j]*B[j][c];
        }
    return sum;
}
int main(){
    int A[3][3],B[3][3],C[3][3];
    //taking input for Matrix A
    cout<<"Enter elements of Matrix A:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
    //taking input for Matrix B
    cout<<"Enter elements of Matrix B:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>B[i][j];
        }
    }/*
    //matrix multiplication
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=A[i][j]*B[j][i];
        }
        for(int j=0;j<;j++){
            C[i][j]=sum;
            break;
        }
    }*/
    //code to get value of matrix C=A*B
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j]=mat_multi_ele(A,B,i,j);
        }
    }
    cout<<"Matrix C:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}