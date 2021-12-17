#include<iostream>
using namespace std;
void frequency(int arr[],int n){
    int num=arr[0],count=1;
    for(int i=1; i<n; i++){
        if(arr[i]==num){
            count++;
        }
        else if(arr[i]!=num){
            cout<<'\n'<<num<<"\t"<<count;
            num=arr[i];
            count=1;
        }
        if(i==n-1){
            cout<<'\n'<<num<<"\t"<<count;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int max=arr[i];
        int loc=i;
        for(int j=i;j<n;j++){
            if(max<arr[j]){
                max=arr[j];
                loc=j;
            }
        }
        int temp=arr[i];
        arr[i]=max;
        arr[loc]=temp;
    }
    cout<<"Sorted array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nN\tcount";
    frequency(arr,n);
    return 0;
}