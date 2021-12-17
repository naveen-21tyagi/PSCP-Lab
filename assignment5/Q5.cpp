//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n,in,pos;
    cout<<"Enter number of elements in array: ";
    cin>>n; //n store number of elements of array the user will enter
    
    int arr[n+1];  //declaration of array of size one greater than n
                   //to insert a element in the array later
    cout<<"Enter array elements: ";
    //for loop to take input and store elements in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to insert: ";
    cin>>in;    //in store element which is to be inserted
    cout<<"At what position: ";
    cin>>pos;      //store position at which element is to be inserted

    //for loop to shift those elements to right by one
    //which are at specified position and right of it
    //so that element can be inserted at the required position
    for(int i=n;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    //inserting the element in array
    arr[pos-1]=in;

    cout<<"The New Array is: ";
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}