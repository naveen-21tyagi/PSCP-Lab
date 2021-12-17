//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n,k,counter=0;   
    cout<<"Enter size of array: ";
    cin>>n;         //n stores size of array
    int arr[n];     //declaration of array
    cout<<"Enter array Elements: ";

    //to store elements of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element of which frequency want to find: ";
    cin>>k;     //element ,of which frequency we want to find
    //for loop to count the frequency of k
    for(int i=0;i<n;i++){
        if(arr[i]==k){  //increase counter by one if k found
            counter++;
        }
    }
    cout<<k<<" occurs "<<counter<<" times.";
    return 0;
}