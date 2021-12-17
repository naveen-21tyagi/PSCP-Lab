//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    int num1,num2,min,hcf,lcm;          //declaration of variables
    cout<<"Enter two numbers: \n";
    cin>>num1>>num2;                    //store entered number in num1 and num2

    //if else statement to determine which is minimum
    //HCF is smaller than or equal to the minimum 
    if(num1<=num2){
        min=num1;}
    else{
        min=num2;
    }
    //for loop for finding HCF of two numbers
    for(int i=1;i<=min;i++){
        if((num1%i==0)&&(num2%i==0)){
            hcf=i;
        }
    //formula for calculating lcm of the two numbers
    lcm=(num1*num2)/hcf;
    }
    cout<<"HCF: "<<hcf<<" LCM: "<<lcm;
    return 0;
}