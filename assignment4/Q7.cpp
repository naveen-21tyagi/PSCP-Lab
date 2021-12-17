//862041_Naveen Kumar Tyagi_Section F
#include<iostream>
using namespace std;
int main(){
    //variables declaration
    //rm_num is to print roman number that times the number is stored in it
    //rem is remainder 
    int year,rm_num,rem;

    cout<<"Enter year in four digits: ";
    cin>>year;

    //while loops to print year in roman numbers involving if else statements 
    while(rem>=1000){                   //this deals with the digit that is at thousand's place
        rm_num=year/1000;
        for(int i=1;i<=rm_num;i++){
        cout<<"M";
        }
        rem=year%1000;
    }
    while(rem>=500){                 //this deals with the digit that is at hundred's place greater than or equal to 5
        if(rem>=900){
            cout<<"CM";
            rem=rem-900;
        }
        else{
            rm_num=rem/500;
            for(int i=1;i<=rm_num;i++){
            cout<<"D";
            }
            rem=rem%500;
        }
    }
    while(rem>=100){                   //this deals with the digit that is at hundred's place less than 5 
        if(rem>=400){
            cout<<"CD";
            rem=rem-400;
        }
        else{
            rm_num=rem/100;
            for(int i=1;i<=rm_num;i++){
            cout<<"C";
            }
            rem=rem%100;
        }
    }
    while(rem>=50){                    //this deals with the digit that is at ten's place greater than or equal to 5
        if(rem>=90){
            cout<<"XC";
            rem=rem-90;
        }
        else{
            rm_num=rem/50;
            for(int i=1;i<=rm_num;i++){
            cout<<"L";
            }
            rem=rem%50;
        }
    }
    while(rem>=10){                         //this deals with the digit that is at ten's place less than 5
        if(rem>=40){
            cout<<"XL";
            rem=rem-40;
        }
        else{
            rm_num=rem/10;
            for(int i=1;i<=rm_num;i++){
            cout<<"X";
            }
            rem=rem%10;
        }
    }
    while(rem>=5){                         //this deals with the digit that is at one's place greater than or equal to 5
        if(rem>=9){
            cout<<"IX";
            rem=rem-9;
        }
        else{
            rm_num=rem/5;
            for(int i=1;i<=rm_num;i++){
            cout<<"V";
            }
            rem=rem%5;
        }
    }

    //if else statements that deals with digit at one's place less than 5
    if(rem==4){
        cout<<"IV";
    }
    else{
        for(rem=rem;rem>0;rem--)
        cout<<"I";
    }
    return 0;
}