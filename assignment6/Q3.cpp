//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

//comm array is to store common elements
//counter variable is to store no. of common variables
int comm[10],counter=0;

//function to find common elements and store in comm array
//it pick an element from 1st array
//and search in 2nd array 
//if found in 2nd then it will search in 3rd array
//if found in 3rd array then it will store
//if not found in 2nd array then there is need to search in 3rd array
//then it start searching 2nd element of 1st array in same procedure
void comm_elem_finder(int arr1[], int arr2[], int arr3[],int a1,int a2, int a3){
    for(int i=0;i<a1;i++){      //pick elements from 1st array
        for(int j=0;j<a2;j++){    //search in 2nd array
            if(arr1[i]==arr2[j]){   // if found 
                for(int k=0;k<a3;k++){  //search in 3rd
                    if(arr1[i]==arr3[k]){  //if found then store
                        comm[counter]=arr1[i];
                        counter++;
                    }
                }
            }
        }
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n"; 
    int a1,a2,a3;

    cout<<"Enter size of 1st array: ";
    cin>>a1;
    int arr1[a1];    //1st array declartion
    cout<<"Enter elements of 1st array: ";
    for(int i=0;i<a1;i++){   //taking input for 1st array
        cin>>arr1[i];
    }    

    cout<<"Enter size of 2nd array: ";
    cin>>a2;
    int arr2[a2];          //2nd array declaration
    cout<<"Enter elements of 2nd array: ";
    for(int i=0;i<a2;i++){   //taking input for 2nd array
        cin>>arr2[i];
    }
    cout<<"Enter size of 3rd array: ";
    cin>>a3;
    int arr3[a3];       //3rd array declaration
    cout<<"Enter elements of 2nd array: ";
    for(int i=0;i<a3;i++){    //taking input for 3rd array
        cin>>arr3[i];
    }
    cout<<"Common Elements: ";
    //passing input to function that give common elements
    comm_elem_finder(arr1,arr2,arr3,a1,a2,a3);

    //prints the common elements  
    for(int i=0;i<counter;i++){
        cout<<comm[i]<<" ";
    }
    return 0;
}