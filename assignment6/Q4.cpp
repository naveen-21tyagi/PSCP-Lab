//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

//function to merge two array and store in third one
void array_merger(int A[],int B[],int C[],int M,int N){
    for(int i=0;i<M;i++){  //store 1st array in 3rd
        C[i]=A[i];  
    }
    for(int i=0;i<N;i++){   //store 2nd array in 3rd
        C[M+i]=B[i];      
    }
    //selection sort to sort the third array 
    for(int i=0;i<M+N-1;i++){
        int loc=i;
        int min=C[i];  //assuming first element of unsorted subarray minimum
        for(int j=i;j<M+N;j++){  //finding min and storing it's location
            if(min>C[j]){
                loc=j;
                min=C[j];
            }
        }
        //swapping min with first unsorted subarray element
        int temp=C[i];
        C[i]=C[loc];
        C[loc]=temp;
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int M,N;
    cout<<"Enter number of elements you want to insert in first array: ";
    cin>>M;
    int A[M]; //declaration of 1st array
    cout<<"Enter elements in ascending order: ";
    for(int i=0;i<M;i++){  //taking input for 1st array
        cin>>A[i];
    }
    cout<<"Enter number of elements you want to insert in second array: ";
    cin>>N;
    int B[N];  //declaration of 2nd array
    cout<<"Enter elements in descending order: ";
    for(int i=0;i<N;i++){   //taking input for 2nd array
        cin>>B[i];
    }
    int C[M+N];   //declaration of third array
    array_merger(A,B,C,M,N);   //passing arrays to merge them
    cout<<"The merged array in ascending order: ";
    //prints the merged array (third)
    for(int i=0;i<M+N;i++){
        cout<<C[i]<<" ";
    }
    return 0;
}