#include<iostream>
using namespace std;
int main(){
    int A[3][3];
    cout<<"Enter elements of A: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
    //transposing the matrix
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    cout<<"Transpose Matrix: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}