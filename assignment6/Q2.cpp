//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

//function to find the smallest number in the array
int smallest(int arr[],int n){
    int smallest=arr[0];   //assuming first element be smallest
    for(int i=1;i<n;i++){      // loop to find and store the smallest
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    return smallest;
}

//function to find the greatest number in the array
int greatest(int arr[],int n){
    int greatest=arr[0];  //assuming first element be greatest
    for(int i=1;i<n;i++){    // loop to find and store greatest
        if(greatest<arr[i]){
            greatest=arr[i];
        }
    }
    return greatest;
}

//function to get sum of array
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];  //add element and sum of previous element and store in sum
    }
    return sum;
}
//function to find average
float average(int arr[],int n){
    int int_sum=sum(arr,n);  //storing sum of elements
    float sum=static_cast<float>(int_sum);  //converting datatype of sum to float
    float average=sum/n;   //storing average;
    return average;
}

//menu function 
void menu(int arr[],int n){
    int response;  //to store input of user in integers
    cout<<"Press 1 to get smallest number.\n"
    <<"Press 2 to get Greatest number.\n"
    <<"Press 3 to get sum of the numbers.\n"
    <<"Press 4 to get average of the numbers.\n";
    cin>>response;

    //switch statement to pass the entered numbers
    //to required funtion to get desired result
    switch(response){
        case 1:
        cout<<"Smallest number is "<<smallest(arr,n);  
        break;    //break the statement if above case found as no need to others then   
        case 2:
        cout<<"Greatest numbers is "<<greatest(arr,n);
        break;
        case 3:
        cout<<"Sum of the numbers is "<<sum(arr,n);
        break;
        case 4:
        cout<<"Average of the numbers is "<<average(arr,n);
        break;
        default:  //default case for invalid input is given
        cout<<"Entered choice is invalid. Enter correct one.";
        menu(arr,n);
    }
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int arr[5];
    cout<<"Enter five numbers: \n";
    for(int i=0;i<5;i++){   //storing numbers in array
        cin>>arr[i];
    }
    menu(arr,5);  //call of menu function
    return 0;
}