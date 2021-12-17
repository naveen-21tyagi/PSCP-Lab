//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std; 

//function to print mid row and column
void mid_row_column(int mat[10][10],int n){
    int mid_row_no=n/2;  //index of mid row
    int mid_column_no=n/2; //index of mid column
    cout<<"Mid Row: ";

    //print mid row
    for(int j=0;j<n;j++){    
        cout<<mat[mid_row_no][j]<<" ";
    }
    cout<<endl;
    cout<<"Mid Column: ";

    //print mid column
    for(int i=0;i<n;i++){    
        cout<<mat[i][mid_column_no]<<" ";
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int n;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    int mat[10][10]; //declaration of 2d array to store matrix
    cout<<"Enter matrix:\n";
    for(int i=0;i<n;i++){      //take input and store in 2d array
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    //call function to print mid row and column of matrix
    mid_row_column(mat,n);
    return 0;
}