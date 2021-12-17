//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n;
    cout<<"Enter size of array: ";
    cin>>n;        //n store size of array

    int arr[n];
    cout<<"Enter elements of array: ";
    //to take input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Even numbers of the array: ";
    //for loop to print out even numbers
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\nOdd numbers of the array: ";
    //for loop to print out odd numbrs
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}