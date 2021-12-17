//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

//function to print matrix in spiral form
//r_s is first row index
//c_s is first column index
//r_e is last row index
//s_e is last column index
void spiral_printer(int arr[4][4],int r_s,int c_s,int r_e,int c_e){
    if(r_s<=r_e &&c_s<=c_e){
        //print first row
        for(int j=c_s;j<=c_e;j++){
            cout<<arr[r_s][j]<<" ";    
        }
        r_s++;
        //print last column
        for(int i=r_s;i<=r_e;i++){
            cout<<arr[i][c_e]<<" ";   
        }
        c_e--;
        //print last row if it not equal to first row
        if((r_s-1)!=r_e){
           for(int j=c_e;j>=c_s;j--){
                cout<<arr[r_e][j]<<" ";   
            }
            r_e--;
        }
        //print first column if it is equal to first
        if(c_s!=(c_e+1)){
            for(int i=r_e;i>=r_s;i--){
                cout<<arr[i][c_s]<<" ";   
            }
            c_s++;
        }
        spiral_printer(arr,r_s,c_s,r_e,c_e); //call itself to print left part
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int arr[4][4];/*={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};*/
    cout<<"Enter 4x4 matrix:\n";
    for(int i=0;i<4;i++){ //take input and store in array
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //call function to print matrix in spiral form
    cout<<"Spiral form:\n";
    spiral_printer(arr,0,0,3,3);
    return 0;
}