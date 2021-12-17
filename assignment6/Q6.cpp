//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std; 

//function to print upper half
void upper_half(int n,int mat[10][10]){
    for(int i=0;i<n;i++){ 
        for(int j=0;j<i;j++){ //print space
            cout<<"  ";
        }
        for(int j=i;j<n;j++){  // print row elements starting from that element
            cout<<mat[i][j]<<" "; //of which column number is equal to row number
        }
        cout<<endl;
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int n;
    cout<<"Enter size of square matrix: ";
    cin>>n;   //store size of square matrix
    int mat[10][10];  // declaration if 2d array to store elements of matrix
    cout<<"Enter matrix:\n";
    for(int i=0;i<n;i++){  //take inputs for matrix and store in 2d array
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"\nUpper half of matrix:\n";
    //call function that print upper half of the matrix
    upper_half(n,mat);
    return 0;
} 