//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

//recursive function to multiply matrix
void mat_multplr(int *A,int *B,int *C,int row1,int col1,int row2,int col2){
    //using static keyword, address are allocated to i,j,k for lifetime  
    //of the program and is allocated only once 
    //and values of variables in previous call carried to next call
    static int i=0,j=0,k=0;
    if(i<row1){
        if(j<col2){
            //this if statement block is to evaluate a row
            if(k<col1){
                //this if statement block is to evaluate a element
                //treating 2d array as a 1d array
                *(C+i*col2+j)+=(*(A+i*col1+k))*(*(B+k*col2+j));
                k++;
                //(int*) is used to assign address equal to that which is
                //written in right, since identifier(name) of array represents
                //address of first element of array,so,for eg.
                //(int*)A assign address of first element of array
                mat_multplr((int*)A,(int*)B,(int*)C,row1,col1,row2,col2);
            }
            k=0;
            j++;//increase j by 1 so that next element of can be evaluated
            mat_multplr((int*)A,(int*)B,(int*)C,row1,col1,row2,col2);
        }
        j=0;
        i++;//increase i by 1 so that next row can be evaluated
        mat_multplr((int*)A,(int*)B,(int*)C,row1,col1,row2,col2);
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int row1,col1,row2,col2; //variables to store sizes of matrices
    cout<<"Enter size of Matrix A: ";
    cin>>row1>>col1;  //take input for size of matrix A
    cout<<"Enter size of Matrix B: ";
    cin>>row2>>col2;  //take input for size of matrix B
    if(col1==row2){   //condition whether multiplication is possible or not
        int A[row1][col1],B[row2][col2];  //declaration of the two matrices

        //taking input for Matrix A
        cout<<"Enter elements of Matrix A:\n";
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                cin>>A[i][j];
            }
        }

        //taking input for Matrix B
        cout<<"Enter elements of Matrix B:\n";
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                cin>>B[i][j];
            }
        }
        //initialising C matrix with all elements equal to 0
        int C[row1][col2]; //declaration of C matrix
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                C[i][j]=0;
            }
        }
        //call of function to do matrix multiplication
        mat_multplr((int*)A,(int*)B,(int*)C,row1,col1,row2,col2);

        //printing out the product
        cout<<"Product matrix of given two matrices:\n";
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //else block to tell multiplication is not possible
    //if required cond. for matrices multiplication not satisfied
    else{
        cout<<"Matrix multiplication is not possible.";
    }
    return 0;
}