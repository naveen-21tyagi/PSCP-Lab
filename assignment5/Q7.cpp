//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n,k;
    cout<<"Enter size of array: ";
    cin>>n;    //store size of array
    int arr[n];
    cout<<"Enter elements of array: ";
    //for loop to take input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>k; // store element which is to be store
    //for loop to search by linear search method
    for(int i=0;i<n;i++){
        // if element found it will show the index and break the loop
        if(k==arr[i]){ 
            cout<<k<<" is found at position "<<i+1;
            break;
        }
    }
    return 0;
}