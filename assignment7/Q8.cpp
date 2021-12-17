//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    //take input and store in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //creating a pointer array that store addresses of input 
    int *ptr1[n];
    for(int i=0;i<n;i++){
        ptr1[i]=&arr[i];
    }
    //creating an another pointer array
    //elements of this array points to above pointer array elemnents
    int **ptr2[n];  
    for(int i=0;i<n;i++){
        ptr2[i]=&ptr1[i];
    } 
    //compare input using 2nd pointer array
    //then arrange(sort) addresses of inputs in 1st pointer array  
    //according to ascending order of input
    //sorting(insertion sort)
    for(int i=0;i<n-1;i++){
        int loc=i;
        int min=**ptr2[i];
        for(int j=i;j<n;j++){
            if(min>**ptr2[j]){
                min=**ptr2[j];
                loc=j;
            }
        }
        //swapping the address
        int *temp=*ptr2[i];
        *ptr2[i]=*ptr2[loc];
        *ptr2[loc]=temp;
    }
    //printing out original input
    cout<<"\nGiven elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //printing out sorted input 
    cout<<"\nElements in ascending order: ";
    for(int i=0;i<n;i++){
        cout<<*ptr1[i]<<" ";
    }
    return 0;
}