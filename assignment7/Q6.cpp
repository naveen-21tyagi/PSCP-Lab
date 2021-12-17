//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int a,b;
    cout<<"Enter size of array A: ";
    cin>>a;
    cout<<"Enter size of array B: ";
    cin>>b;
    int A[a],B[b],C[a+b];

    cout<<"Enter elements of Array A: ";
    //take input for array A
    for(int i=0;i<a;i++){
        cin>>A[i];
    }

    cout<<"Enter elements of Array B: ";
    //take input for array B
    for(int i=0;i<b;i++){
        cin>>B[i];
    }    

    //elements of array A will stored at odd places in array C
    //elements of array B will stored at even places in array C
    
    //if size of array A is greater than array B
    //then after exhausion of array B
    //array A elements will be appended
    if(a>=b){
        //store A at odd places 
        for(int i=0;i<b;i++){
            C[2*i]=A[i];  
        }
        //store B at even Places
        for(int i=0;i<b;i++){
            C[2*i+1]=B[i];
        }
        //append A
        for(int i=0;i<a-b;i++){
            C[2*b+i]=A[b+i];
        }
    }
    //if size of array B is greater than array A
    //then after exhausion of array A
    //array B elements will be appended
    else if(a<b){
        //store A at odd places
        for(int i=0;i<a;i++){
            C[2*i]=A[i];
        }
        //store B at even Places
        for(int i=0;i<a;i++){
            C[2*i+1]=B[i];
        }
        //append B
        for(int i=0;i<b-a;i++){
            C[2*a+i]=B[a+i];
        }
    }
    //printing Array C using pointers
    int *p=C;    
    cout<<"\nArray C: ";
    for(int i=0;i<a+b;i++){
        cout<<*(p+i)<<" ";  //print derefenced value
    }
    return 0;
}