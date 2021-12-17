//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,gr,rm;      //declaration of required variables
    cout<<"Enter three numbers: \n";
    cin>>num1>>num2>>num3;         //store entered numbers

    //if else statements to find the greatest number in given three
    if((num1>num2)&&(num1>num3)){    
        gr=num1;
        }
    else if((num2>num1)&&(num2>num3)){
        gr=num2;
        }
    else if((num3>num1)&&(num3>num2)){
        gr=num3;
        }
    cout<<"The Greatest number in given three number: "<<gr<<endl;  //print greatest number
    
    //to find whether the greatest number is even or odd and print
    rm=gr%2;
    if(rm==0){
        cout<<"This is even.";
        }
    else{
        cout<<"This is odd.";
    }
    return 0;
}