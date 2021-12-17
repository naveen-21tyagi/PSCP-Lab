//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n,k;
    cout<<"This program will print K th largest element.\n";
    cout<<"Enter size of array: ";
    cin>>n;     // n store size of array
    int arr[n];
    cout<<"Enter elements of array: ";
    //for loop to take input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter k: ";
    cin>>k;
    //selection sort to sort the array
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int loc=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                loc=j;
            }
        }
        //swapping minimum term with the first of unsorted subarray
        int temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
    //printing k largest 
    cout<<arr[n-k];
    
    return 0;
}