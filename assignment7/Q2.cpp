//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int sum=0;

//add number to sum and decrease it's value by 1
//then pass number to itself and do same
//until that number became 0
//returns final value of sum
int adder(int n){
    if(n>0){
        sum+=n--;
        adder(n);
    }
    return sum;
}
int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F";
    int N;
    cout<<"\nEnter N: ";
    cin>>N;

    //calling adder function to get sum
    cout<<"\nSum of first "<<N<<" natural numbers: "<<adder(N);
    return 0;
}