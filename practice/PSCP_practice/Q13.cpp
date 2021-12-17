#include<iostream>
using namespace std;
void binary(int n,int *bin,int i){
    int j=7;
    while(n>0){
        *(bin+ i*8 + j--)=n%2;
        n=n/2;
    }
}
int diff_sum(int *bin,int n){
    int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n; j++){
            for(int k=0; k<8; k++){
                if(*(bin + i*8 + k) != *(bin +j*8 +j)){
                    sum++;
                }
            }
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int bin[n][8]={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
        binary(arr[i],(int*) bin,i);
    }
    cout<<endl;
    cout<<diff_sum((int*) bin,n);
    return 0;
}