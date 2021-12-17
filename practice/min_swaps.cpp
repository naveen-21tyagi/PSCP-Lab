#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //selection sort
    int min_swap=0;
    for(int i=0;i<n-1;i++){
        int loc=i;
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                loc=j;
                min=arr[j];
            }
        }
        if(min!=arr[i]){
            min_swap++;
        }
        int temp=arr[i];
        arr[i]=min;
        arr[loc]=temp;
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nMinimum no of swap: "<<min_swap;
}