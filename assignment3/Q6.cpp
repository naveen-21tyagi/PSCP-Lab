//862041_Naveen Kumar Tyagi
#include<iostream>
using namespace std;
int main(){
    int num,bin[100],i,num_bin;//declaration of variables,here bin[100] will store array of values
    cout<<"Enter a number: ";
    cin>>num;                  //store entered number in num 
    num_bin=num;               // store num in num_bin so that num_bin can be used to get binary form without affecting num value
   
    for(i=0;num_bin>0;i++){   //for loop to convert dec number in binary form
        bin[i]=num_bin%2;     //remainder will store in array
        num_bin=num_bin/2;
    }
    
    cout<<"\nNumber in binary form: ";
    for(i=i-1;i>=0;i--){      // for loop to print binary form of given number
    cout<<bin[i];
    }
    
    cout<<"\nNumber in octal form: "<<std::oct<<num;          //print given number in octal form 
    cout<<"\nNumber in hexadecimal form: "<<std::hex<<num;    // print given number in hexadecimal form
    return 0;
}
