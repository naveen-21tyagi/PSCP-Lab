
//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int minimum(int a, int b){
    if(a>b){
        return b;
    }
    else if(b>a){
        return a;
    }
}
 
//function to find min sum
int min_diff(int arr[], int i, int sum_subset, int total_sum){
    //sum_subset is sum of a set
    //total_sum-sum_subset is sum of other set
    //finally we return difference of these two
    if (i==0)
        return abs((total_sum-sum_subset) - sum_subset);
 
 
    //if one call we add arr[i] and in other we do not 
    //and return minimum of two
    return minimum(min_diff(arr, i-1, sum_subset+arr[i-1], total_sum),min_diff(arr, i-1, sum_subset, total_sum));
}
 
// Returns minimum possible difference between sums
// of two subsets
int min_sum(int arr[], int n){
    int total_sum = 0;  //for total sum of elements
    for (int i=0; i<n; i++){
        total_sum += arr[i];
    }
    return min_diff(arr, n, 0, total_sum);
}
 
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F\n";
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nThe minimum difference of any two subset: ";
    cout<<min_sum(arr, n);
    return 0;
}