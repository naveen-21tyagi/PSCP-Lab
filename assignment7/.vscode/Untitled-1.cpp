#include<iostream>
using namespace std;
void matrix(int *a,int *b,int *c,int r1,int r2,int c1,int c2){
    static int i=0,j=0,k=0;
    if(i>=r1){
        return;
    }
    if(j<c2){
        if(k<c1){
            *(c+i*c2+j)+=(*(a+i*c1+k))*(*(b+k*c2+j));
            k++;
            matrix((int*)a,(int*)b,(int*)c,r1,c1,r2,c2);
        }
        k=0;
        j++;
        matrix((int*)a,(int*)b,(int*)c, r1,c1,r2,c2);
    }
    j=0;
    i++;
    matrix((int*)a,(int*)b,(int*)c,r1,c1,r2,c2);
}
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter size of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter size of second matrix: ";
    cin>>r2>>c2;
    int a[r1][c1],b[r2][c2];
    cout<<"Enter first matrix:\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter second matrix:\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>b[i][j];
        }
    }
    if(c1==r2){
        int c[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                c[i][j]=0;
            }
        }
        matrix((int*)a,(int*)b,(int*)c,r1,c1,r2,c2);
        cout<<"Product of the two matrix:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrix Multiplication not possible.";
    }
}