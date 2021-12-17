//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F";
    int n;
    cout<<"\nEnter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements of array: ";
    //take input and store in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing array elements using pointers
    int *p=arr; 
    cout<<"Array elements: ";
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" "; //print out dereferenced value
    }
    return 0;
}