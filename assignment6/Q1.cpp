//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;

//funtion to raise the power of 10 to k
float pow_10(int k){
    if(k==0){
        return 1;
    }
    return 10*pow_10(k-1);
}

//funtion which round off the number
//upto desired decimal places
//first multiply the number by 
//10 raised to the power k
//then extract decimal part of the new number(intermediate variable)
//if decimal part>0.5 then increase integral part of new num by 1
//if it is less than 0.5 then left as it is
//after that divide the integral part by 
//10 raised to power k
//then we get desired reult
float round_off(float num,int k){
    float itrmd=num*pow_10(k);      
    int int_itrmd=static_cast<int>(itrmd); //storing integral part of intermediate var
    float decimal_part=itrmd-int_itrmd;    //storing decimal part of intermediat var
    if(decimal_part>=0.5){
        int_itrmd+=1;
    }
    num=int_itrmd/pow_10(k);
    return num;
}

int main(){
    cout<<"862041_Naveen Kumar Tyagi_Section F";
    float num;
    int k;
    cout<<"\nEnter floating point number: ";
    cin>>num;
    cout<<"Enter k upto which you want to round off the number: ";
    cin>>k;
    cout<<round_off(num,k);  
    return 0;
}