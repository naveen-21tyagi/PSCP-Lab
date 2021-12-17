//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n;
    cout<<"Enter size of array: ";
    cin>>n;        //n store size of array

    int arr[n],even_odd[n],index_even=0,index_odd=n-1;/*
    array arr is to take input from user and
    array even_odd is store even and odd number in arranged order
    index_even is index to store even
    index_odd is index to store odd*/
    cout<<"Enter elements of array: ";
    //to take input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //arranging the even and odd integers in even_odd array
    for(int i=0;i<n;i++){
        //store even numbers from first index of array i.e. from left to right
        //first encounterd even will be stored as first element
        if(arr[i]%2==0){
            even_odd[index_even]=arr[i];
            index_even++;
        }
        //store odd numbers from last index i.e from right to left
        //first encounterd odd will be stored as last element
        else{
            even_odd[index_odd]=arr[i];
            index_odd--;
        }
    }
    //print out the arranged array
    for(int i=0;i<n;i++){
        cout<<even_odd[i]<<" ";
    }
    return 0;
}