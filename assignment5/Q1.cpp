//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    cout<<"862041_Naveen Kumar Tyagi\n";
    int n;                        //n is to store size of array
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];                 //declaration of arr array
    cout<<"Enter elements of array: ";
    //to store elements in array arr
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];   //assuming first element of array be maximum and minimum

    //to find the greatest and smallest number in array
    for(int i=1;i<n;i++){
         /*compare each element with the max and if element is greater then it store to max 
         . Then the max will compare to rest elements*/
        if(max<arr[i]){             
            max=arr[i];
        }
        /*compare each element with the min and if element is smaller then it store to min
         . Then the min will compare to rest elements*/
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Maximum Element: "<<max<<"\n"
    <<"Minimum Element: "<<min;
    return 0;
}