#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of numbers: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    float mean =float(sum)/n;
    float var[n];
    for(int i=0; i<n; i++){
        var[i]=(arr[i]-mean)*(arr[i]-mean);
    }
    float varSum=0;
    for(int i=0; i<n; i++){
        varSum+=var[i];
    }
    float variance=varSum/n;
    float standardDeviation=sqrt(variance);
    cout<<"Variance = "<<variance<<"\nStandard Deviation = "<<standardDeviation;
    return 0;
}