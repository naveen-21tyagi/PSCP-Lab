#include<iostream>
using namespace std;
int count_digits(int n,int digits[]){
    int count=0;
    while(n!=0){
        digits[count]=n%10;
        n/=10;
        count++;
    }
    return count;
}
int square(int n){
    return n*n;
}
void reverse_array(int arr[],int size){
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
int exp_10(int n){
    if(n>0){
        return 10*exp_10(n-1); 
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int n_sq=square(n);

    int digits[8];
    int no_digits=count_digits(n_sq,digits);
    reverse_array(digits,no_digits);

  
    if(no_digits%2==0){
        int fh=0,sh=0;
        for(int i=0;i<no_digits/2;i++){
            fh+=exp_10(no_digits/2-1-i)*digits[i];
            sh+=exp_10(i)*digits[no_digits-1-i];
        }
        if(fh+sh==n){
            cout<<"Kaprekar.";
        }
        else{
            cout<<"not Kaprekar.";
        }
        
    }
    else{
        cout<<"not Kaprekar.";
    }
    return 0;
}