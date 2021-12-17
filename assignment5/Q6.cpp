//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n,pos;
    cout<<"Enter size of array: ";
    cin>>n;   // n store size of array
    int arr[n];
    cout<<"Enter array elements: ";
    //for loop to take input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //sorting the array by selection sort
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int loc;
        //find minimum element in unsorted subarray
        for(int j=i;j<n;j++){
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
    cout<<"Sorted Array: ";
    //for loop to print out the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter position of element to delete: ";
    cin>>pos;


    //shifting elements by one to position specified
    //in this way value at specified position by element
    //which is at right of it
    //we lost the value in other words we deleted that
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    //printing out the array
    cout<<"New data in Array: ";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
