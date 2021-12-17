//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int fibonacci_num(int n){
    // first two numbers are 1
    if(n==1||n==2){
        return 1;
    }
    //call itself to get (n-1)th and (n-2)th value
    //num store the sum of that two values
    int num=fibonacci_num(n-1)+fibonacci_num(n-2);
    //return num(n th number) at last
    return num;
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F";
    int N;
    cout<<"\nEnter N: ";
    cin>>N;
    cout<<"\nFirst "<<N<<" fibonacci numbers: ";
    for(int i=1;i<=N;i++){
        //calling function to return i th number
        cout<<fibonacci_num(i)<<" ";
    }
    return 0;
}