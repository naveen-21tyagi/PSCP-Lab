#include<iostream>
using namespace std;
int collatz_count(int n){
    static int count=1;
    while(n!=1){
        if(n%2==0){
            //cout<<n<<" ";
            count++;
            return collatz_count(n/2);
        }
        else if(n%2==1){
            //cout<<n<<" ";
            count++;
            return collatz_count(3*n-1);
        }
    }
    //cout<<n;
    return count; 
}
void collatz_sequence(int n){

    while(n!=1){
        if(n%2==0){
            cout<<n<<" ";
            
        collatz_sequence(n/2);
        }
        else if(n%2==1){
            cout<<n<<" ";
            
        collatz_sequence(3*n-1);
        }
    }
    cout<<n;

}
int max(int arr[],int size){
    int max=arr[0];
    int num=1;
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
            num=i+1;
        }
    }
    return num;
}
int main(){
    int n;
    cin>>n;
    int no_terms[n-1];
    for(int i=0;i<n-1;i++){
        no_terms[i]=collatz_count(i+1);
    }
    int num=max(no_terms,n-1);
    cout<<num<<"\n";
    collatz_sequence(num);

    return 0;
}